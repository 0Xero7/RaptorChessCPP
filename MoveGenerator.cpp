
#include "MoveGenerator.h"

u64 MoveGenerator::GetQueenMoves(int square, u64 our, u64 their)
{
    return GetRookMoves(square, our, their) | GetBishopMoves(square, our, their);
}

u64 MoveGenerator::GetRookMoves(int square, u64 our, u64 their)
{
    u64 blockers = (our | their);
    u64 mask = files[7 - square % 8] | ranks[square / 8];

    if (square / 8 == 0)
        mask &= ~rank_8;
    else if (square / 8 == 7)
        mask &= ~rank_1;
    else
        mask &= ~(rank_1 | rank_8);

    if (square % 8 == 0)
        mask &= ~file_a;
    else if (square % 8 == 7)
        mask &= ~file_h;
    else
        mask &= ~(file_a | file_h);

    u64 masked_blockers = blockers & (mask ^ (1ull << square));

    unsigned hash = (masked_blockers * magics::RookMagics[square]) >> (64 - magics::RookBits[square]);

    return magics::getRookAttack(square, hash) & ~our;
}

u64 MoveGenerator::GetBishopMoves(int square, u64 our, u64 their)
{
    u64 blockers = (our | their);
    u64 mask = bishopBlockerMask[square];

    if (square / 8 == 0)
        mask &= ~rank_8;
    else if (square / 8 == 7)
        mask &= ~rank_1;
    else
        mask &= ~(rank_1 | rank_8);

    if (square % 8 == 0)
        mask &= ~file_a;
    else if (square % 8 == 7)
        mask &= ~file_h;
    else
        mask &= ~(file_a | file_h);

    u64 masked_blockers = blockers & (mask ^ (1ull << square));
    unsigned hash = (masked_blockers * magics::BishopMagics[square]) >> (64 - magics::BishopBits[square]);

    return magics::getBishopAttack(square, hash) & ~our;
}

U64 MoveGenerator::GetKingMoves(int square, U64 ourPieces)
{
    u64 board = 1ull << square;

    U64 left = 0, right = 0, up = 0;

    left |= board << (unsigned) 1 | board << (unsigned) 9 | board >> (unsigned) 7;
    left &= ~file_h;

    right |= board >> (unsigned) 1 | board >> (unsigned) 9 | board << (unsigned) 7;
    right &= ~file_a;

    return (left | right | board << (unsigned) 8 | board >> (unsigned) 8) & ~ourPieces;
}

U64 MoveGenerator::GetKnightMoves(int square, U64 ourPieces)
{
    u64 board = 1ull << square;

    return ((((board << (unsigned) 17) | (board >> (unsigned) 15)) & ~file_h) |
            (((board << (unsigned) 10) | (board >> (unsigned) 6)) & ~(file_h | file_g)) |
            (((board << (unsigned) 15) | (board >> (unsigned) 17)) & ~file_a) |
            (((board << (unsigned) 6) | (board >> (unsigned) 10)) & ~(file_a | file_b))) & ~ourPieces;
}

U64 MoveGenerator::GetPawnMoves(int square, U64 ourPieces, U64 opponentPieces, bool isWhite)
{
    u64 board = 1ull << square;

    U64 captures = 0, quiets = 0;

    if ((board & ~rank_1) == 0) return 0;      // PROMOTIONS NOT IMPLEMENTED
    if ((board & ~rank_8) == 0) return 0;      // PROMOTIONS NOT IMPLEMENTED

    if ((board & ~file_a) != 0)
        captures |= isWhite ? board << 9 : board >> 7;
    if ((board & ~file_h) != 0)
        captures |= isWhite ? board << 7 : board >> 9;

    captures &= opponentPieces;                    // keep valid captures

    if (isWhite)
    {
        quiets |= board << 8;
        if (board & rank_2)
            quiets |= board << 16;

        quiets &= ~(opponentPieces | opponentPieces << 8);
    } else
    {
        quiets |= board >> 8;
        if (board & rank_7)
            quiets |= board >> 16;

        quiets &= ~(opponentPieces | opponentPieces >> 8);
    }

    quiets &= ~ourPieces;

    return captures | quiets;
}