cmake_minimum_required(VERSION 3.14)
project(RaptorChessAICPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(RaptorChessAICPP main.cpp Bitboard.cpp MoveGenerator.cpp Constants.h devtools/u64utils.cpp magics.cpp magics.h devtools/u64utils.h Bitboard.h Evaluate.cpp Evaluate.h MoveGenerator.h)