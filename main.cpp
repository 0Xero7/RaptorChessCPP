
#include "magics.h"
#include <iostream>
#include "devtools/u64utils.h"
#include "MoveGenerator.h"
#include <thread>
#include "Bitboard.h"
#include "Evaluate.h"

int main()
{
    magics::initialize();

    Bitboard board;
    board.Display();

    std::cout << Evaluate::get_eval(board, true);

    return 0;
}