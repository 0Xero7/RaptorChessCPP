//
// Created by smpsm on 28-05-19.
//

#ifndef RAPTORCHESSAICPP_BITBOARD_H
#define RAPTORCHESSAICPP_BITBOARD_H

#include <iostream>
#include "Constants.h"
#include "devtools/u64utils.h"

class Bitboard
{
public:
    Bitboard();
    void Display();
    u64 getWhitePieces();
    u64 getBlackPieces();

    U64 w_pawns = 0, w_rooks = 0, w_bishops, w_knights, w_queen, w_king;
    U64 b_pawns, b_rooks, b_bishops, b_knights, b_queen, b_king;
};

#endif //RAPTORCHESSAICPP_BITBOARD_H
