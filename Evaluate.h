//
// Created by smpsm on 28-05-19.
//

#ifndef RAPTORCHESSAICPP_EVALUATE_H
#define RAPTORCHESSAICPP_EVALUATE_H

#include "Bitboard.h"
#include "MoveGenerator.h"

class Evaluate
{
private:
    static int getSetBits(u64 arg);
    static int numberOfSetBits(uint32_t i);

    static float evalPieces(Bitboard board);
public:
    static float get_eval(Bitboard board, bool isWhite);
};


#endif //RAPTORCHESSAICPP_EVALUATE_H
