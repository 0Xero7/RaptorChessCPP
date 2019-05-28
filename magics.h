
#ifndef RAPTORCHESSAICPP_MAGICS_H
#define RAPTORCHESSAICPP_MAGICS_H

#include "Constants.h"
#include <iostream>

static U64 rookAttacks[64][4096];
static U64 bishopAttacks[64][512];

class magics
{
private:
    static U64 magics::fillRook(int square, u64 board);

public:
    const static int RookBits[64], BishopBits[64];
    const static u64 RookMagics[64];
    const static u64 BishopMagics[64];

    static u64 getRookAttack(int square, unsigned hash);
    static u64 getBishopAttack(int square, unsigned hash);

    static U64 magics::fillBishop(int square, u64 board);

    static void initialize();
};

#endif //RAPTORCHESSAICPP_MAGICS_H
