
#include "Bitboard.h"

#define U64 unsigned long long

Bitboard::Bitboard()
{
    w_pawns = 0b1111111100000000;
    w_rooks = 0b10000001;
    w_knights = 0b01000010;
    w_bishops = 0b00100100;
    w_queen = 0b00010000;
    w_king = 0b00001000;

    b_pawns = 0xFF000000000000;
    b_rooks = 0b1000000100000000000000000000000000000000000000000000000000000000;
    b_knights = 0b0100001000000000000000000000000000000000000000000000000000000000;
    b_bishops = 0b0010010000000000000000000000000000000000000000000000000000000000;
    b_queen = 0b0001000000000000000000000000000000000000000000000000000000000000;
    b_king = 0b0000100000000000000000000000000000000000000000000000000000000000;
}

void Bitboard::Display()
{
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 7; j >= 0; j--)
        {
            if ((w_pawns >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "P|";
            else if ((w_rooks >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "R|";
            else if ((w_knights >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "N|";
            else if ((w_bishops >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "B|";
            else if ((w_queen >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "Q|";
            else if ((w_king >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "K|";
            else if ((b_pawns >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "p|";
            else if ((b_rooks >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "r|";
            else if ((b_knights >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "n|";
            else if ((b_bishops >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "b|";
            else if ((b_queen >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "q|";
            else if ((b_king >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "k|";
            else
                std::cout << " |";
        }
        std::cout << "\b " << std::endl;
    }
}

u64 Bitboard::getWhitePieces()
{
    return w_bishops | w_king | w_knights | w_pawns | w_queen | w_rooks;
}

u64 Bitboard::getBlackPieces()
{
    return b_bishops | b_king | b_knights | b_pawns | b_queen | b_rooks;
}