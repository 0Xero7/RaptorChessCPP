
#include "magics.h"
#include "devtools/u64utils.h"
#include <math.h>

constexpr int magics::RookBits[64] = {12, 11, 11, 11, 11, 11, 11, 12,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      11, 10, 10, 10, 10, 10, 10, 11,
                                      12, 11, 11, 11, 11, 11, 11, 12};

constexpr int magics::BishopBits[64] = {6, 5, 5, 5, 5, 5, 5, 6,
                                        5, 5, 5, 5, 5, 5, 5, 5,
                                        5, 5, 7, 7, 7, 7, 5, 5,
                                        5, 5, 7, 9, 9, 7, 5, 5,
                                        5, 5, 7, 9, 9, 7, 5, 5,
                                        5, 5, 7, 7, 7, 7, 5, 5,
                                        5, 5, 5, 5, 5, 5, 5, 5,
                                        6, 5, 5, 5, 5, 5, 5, 6};


//<editor-fold desc="Rook Magics">

const u64 magics::RookMagics[64] = {
        0xa8002c000108020ULL, 0x6c00049b0002001ULL, 0x100200010090040ULL, 0x2480041000800801ULL, 0x280028004000800ULL,
        0x900410008040022ULL, 0x280020001001080ULL, 0x2880002041000080ULL, 0xa000800080400034ULL, 0x4808020004000ULL,
        0x2290802004801000ULL, 0x411000d00100020ULL, 0x402800800040080ULL, 0xb000401004208ULL, 0x2409000100040200ULL,
        0x1002100004082ULL, 0x22878001e24000ULL, 0x1090810021004010ULL, 0x801030040200012ULL, 0x500808008001000ULL,
        0xa08018014000880ULL, 0x8000808004000200ULL, 0x201008080010200ULL, 0x801020000441091ULL, 0x800080204005ULL,
        0x1040200040100048ULL, 0x120200402082ULL, 0xd14880480100080ULL, 0x12040280080080ULL, 0x100040080020080ULL,
        0x9020010080800200ULL, 0x813241200148449ULL, 0x491604001800080ULL, 0x100401000402001ULL, 0x4820010021001040ULL,
        0x400402202000812ULL, 0x209009005000802ULL, 0x810800601800400ULL, 0x4301083214000150ULL, 0x204026458e001401ULL,
        0x40204000808000ULL, 0x8001008040010020ULL, 0x8410820820420010ULL, 0x1003001000090020ULL, 0x804040008008080ULL,
        0x12000810020004ULL, 0x1000100200040208ULL, 0x430000a044020001ULL, 0x280009023410300ULL, 0xe0100040002240ULL,
        0x200100401700ULL, 0x2244100408008080ULL, 0x8000400801980ULL, 0x2000810040200ULL, 0x8010100228810400ULL,
        0x2000009044210200ULL, 0x4080008040102101ULL, 0x40002080411d01ULL, 0x2005524060000901ULL, 0x502001008400422ULL,
        0x489a000810200402ULL, 0x1004400080a13ULL, 0x4000011008020084ULL, 0x26002114058042ULL};
//</editor-fold>

//<editor-fold desc="Bishop Magics">

const u64 magics::BishopMagics[64] = {
        0x89a1121896040240ULL, 0x2004844802002010ULL, 0x2068080051921000ULL, 0x62880a0220200808ULL, 0x4042004000000ULL,
        0x100822020200011ULL, 0xc00444222012000aULL, 0x28808801216001ULL, 0x400492088408100ULL, 0x201c401040c0084ULL,
        0x840800910a0010ULL, 0x82080240060ULL, 0x2000840504006000ULL, 0x30010c4108405004ULL, 0x1008005410080802ULL,
        0x8144042209100900ULL, 0x208081020014400ULL, 0x4800201208ca00ULL, 0xf18140408012008ULL, 0x1004002802102001ULL,
        0x841000820080811ULL, 0x40200200a42008ULL, 0x800054042000ULL, 0x88010400410c9000ULL, 0x520040470104290ULL,
        0x1004040051500081ULL, 0x2002081833080021ULL, 0x400c00c010142ULL, 0x941408200c002000ULL, 0x658810000806011ULL,
        0x188071040440a00ULL, 0x4800404002011c00ULL, 0x104442040404200ULL, 0x511080202091021ULL, 0x4022401120400ULL,
        0x80c0040400080120ULL, 0x8040010040820802ULL, 0x480810700020090ULL, 0x102008e00040242ULL, 0x809005202050100ULL,
        0x8002024220104080ULL, 0x431008804142000ULL, 0x19001802081400ULL, 0x200014208040080ULL, 0x3308082008200100ULL,
        0x41010500040c020ULL, 0x4012020c04210308ULL, 0x208220a202004080ULL, 0x111040120082000ULL, 0x6803040141280a00ULL,
        0x2101004202410000ULL, 0x8200000041108022ULL, 0x21082088000ULL, 0x2410204010040ULL, 0x40100400809000ULL,
        0x822088220820214ULL, 0x40808090012004ULL, 0x910224040218c9ULL, 0x402814422015008ULL, 0x90014004842410ULL,
        0x1000042304105ULL, 0x10008830412a00ULL, 0x2520081090008908ULL, 0x40102000a0a60140ULL};
//</editor-fold>

U64 magics::fillRook(int square, u64 board)
{
    int rightLength = square % 8, leftLength = 7 - rightLength,
            topLength = 7 - (square / 8), bottomLength = 7 - topLength;

    U64 mask = (U64) 1 << (unsigned) square;
    U64 bit = 0;
    U64 fill = 0;

    for (int i = 1; i <= rightLength; i++)
    {
        bit = mask >> (unsigned) i;
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= leftLength; i++)
    {
        bit = mask << (unsigned) i;
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= topLength; i++)
    {
        bit = mask << (unsigned) (i * 8);
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= bottomLength; i++)
    {
        bit = mask >> (unsigned) (i * 8);
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    return fill;
}

U64 magics::fillBishop(int square, u64 board)
{
    int northEast = __min(square % 8, 7 - square / 8), southEast = __min(square % 8, square / 8),
            southWest = __min(square / 8, 7 - square % 8), northWest = __min(7 - square % 8, 7 - square / 8);

    U64 mask = (U64) 1 << (unsigned) square;
    U64 bit = 0;
    U64 fill = 0;

    for (int i = 1; i <= northEast; i++)
    {
        bit = mask << (unsigned) 7 * i;
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= southEast; i++)
    {
        bit = mask >> (unsigned) 9 * i;
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= southWest; i++)
    {
        bit = mask >> (unsigned) (7 * i);
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    for (int i = 1; i <= northWest; i++)
    {
        bit = mask << (unsigned) (i * 9);
        if (bit & board)
        {
            fill |= bit;
            break;
        }

        fill |= bit;
    }

    return fill;
}


void magics::initialize()
{
    unsigned int bits = 0;
    int indices[12];

    //Rook Attacks
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            bits = 0;
            u64 blockers;
            int index = 0;

            int right = j % 8 - 1, left = 6 - (j % 8), top = 6 - i, bottom = i - 1;

            for (int k = 1; k <= right; k++)
                indices[index++] = (i * 8 + j) - k;
            for (int k = 1; k <= bottom; k++)
                indices[index++] = (i * 8 + j) - (8 * k);
            for (int k = 1; k <= left; k++)
                indices[index++] = (i * 8 + j) + k;
            for (int k = 1; k <= top; k++)
                indices[index++] = (i * 8 + j) + (8 * k);

            while (bits < pow(2, RookBits[i * 8 + j]))
            {
                blockers = 0ULL;

                for (unsigned int k = 0; k < RookBits[i * 8 + j]; k++)
                    blockers |= ((bits >> k) & 1ULL) << indices[k];

                unsigned hash = (RookMagics[i * 8 + j] * blockers) >> (64 - RookBits[i * 8 + j]);

                rookAttacks[i * 8 + j][hash] = magics::fillRook(i * 8 + j, blockers);

                bits++;
            }
        }
    }

    //Bishop Attacks
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            bits = 0;
            u64 blockers;
            int index = 0;
            int square = i * 8 + j;

            int northEast = __min(square % 8, 7 - square / 8) - 1, southEast = __min(square % 8, square / 8) - 1,
                    southWest = __min(square / 8, 7 - square % 8) - 1, northWest =
                    __min(7 - square % 8, 7 - square / 8) - 1;

            for (int k = 1; k <= northEast; k++)
                indices[index++] = (i * 8 + j) + 7 * k;
            for (int k = 1; k <= southEast; k++)
                indices[index++] = (i * 8 + j) - (9 * k);
            for (int k = 1; k <= southWest; k++)
                indices[index++] = (i * 8 + j) - 7 * k;
            for (int k = 1; k <= northWest; k++)
                indices[index++] = (i * 8 + j) + (9 * k);

            while (bits < pow(2, BishopBits[i * 8 + j]))
            {
                blockers = 0ULL;

                for (unsigned int k = 0; k < BishopBits[i * 8 + j]; k++)
                    blockers |= ((bits >> k) & 1ULL) << indices[k];

                unsigned hash = (BishopMagics[i * 8 + j] * blockers) >> (64 - BishopBits[i * 8 + j]);

                bishopAttacks[i * 8 + j][hash] = magics::fillBishop(i * 8 + j, blockers);

                bits++;
            }
        }
    }
}

u64 magics::getRookAttack(int square, unsigned hash)
{
    return rookAttacks[square][hash];
}

u64 magics::getBishopAttack(int square, unsigned hash)
{
    return bishopAttacks[square][hash];
}