
#include "Evaluate.h"

float Evaluate::get_eval(Bitboard board, bool isWhite)
{
    return evalPieces(board);
}

float Evaluate::evalPieces(Bitboard board)
{
    float rooks = getSetBits(board.w_rooks) - getSetBits(board.b_rooks),
    knights = getSetBits(board.w_knights) - getSetBits(board.b_knights),
    bishops = getSetBits(board.w_bishops) - getSetBits(board.b_bishops),
    queens = getSetBits(board.w_queen) - getSetBits(board.b_queen),
    pawns = getSetBits(board.w_pawns) - getSetBits(board.b_pawns);

    return rooks * rookValue + knights * knightValue + bishops * bishopValue + queens * queenValue
        + pawns * pawnValue;
}

int Evaluate::getSetBits(u64 arg)
{
    return numberOfSetBits(arg >> 32) + numberOfSetBits((arg << 32) >> 32);
}

int Evaluate::numberOfSetBits(uint32_t i)
{
    i = i - ((i >> 1ul) & 0x55555555);
    i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
    return (((i + (i >> 4)) & 0x0F0F0F0Ful) * 0x01010101ul) >> 24;
}