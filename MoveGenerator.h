//
// Created by smpsm on 28-05-19.
//

#ifndef RAPTORCHESSAICPP_MOVEGENERATOR_H
#define RAPTORCHESSAICPP_MOVEGENERATOR_H

#include "Constants.h"
#include "magics.h"
#include "devtools/u64utils.h"


class MoveGenerator
{
public:
    static u64 MoveGenerator::GetQueenMoves(int square, u64 our, u64 their);
    static u64 MoveGenerator::GetRookMoves(int square, u64 our, u64 their);
    static u64 MoveGenerator::GetBishopMoves(int square, u64 our, u64 their);
    static U64 MoveGenerator::GetKingMoves(int square, U64 ourPieces);
    static U64 MoveGenerator::GetKnightMoves(int square, U64 ourPieces);
    static U64 MoveGenerator::GetPawnMoves(int square, U64 ourPieces, U64 opponentPieces, bool isWhite);
};


#endif //RAPTORCHESSAICPP_MOVEGENERATOR_H
