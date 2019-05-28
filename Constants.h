
#ifndef RAPTORCHESSAICPP_CONSTANTS_H
#define RAPTORCHESSAICPP_CONSTANTS_H

#define U64 unsigned long long
#define u64 U64

//<editor-fold>   Squares

#define h1 0x1
#define g1 0x2
#define f1 0x4
#define e1 0x8
#define d1 0x10
#define c1 0x20
#define b1 0x40
#define a1 0x80
#define h2 0x100
#define g2 0x200
#define f2 0x400
#define e2 0x800
#define d2 0x1000
#define c2 0x2000
#define b2 0x4000
#define a2 0x8000
#define h3 0x10000
#define g3 0x20000
#define f3 0x40000
#define e3 0x80000
#define d3 0x100000
#define c3 0x200000
#define b3 0x400000
#define a3 0x800000
#define h4 0x1000000
#define g4 0x2000000
#define f4 0x4000000
#define e4 0x8000000
#define d4 0x10000000
#define c4 0x20000000
#define b4 0x40000000
#define a4 0x80000000
#define h5 0x100000000
#define g5 0x200000000
#define f5 0x400000000
#define e5 0x800000000
#define d5 0x1000000000
#define c5 0x2000000000
#define b5 0x4000000000
#define a5 0x8000000000
#define h6 0x10000000000
#define g6 0x20000000000
#define f6 0x40000000000
#define e6 0x80000000000
#define d6 0x100000000000
#define c6 0x200000000000
#define b6 0x400000000000
#define a6 0x800000000000
#define h7 0x1000000000000
#define g7 0x2000000000000
#define f7 0x4000000000000
#define e7 0x8000000000000
#define d7 0x10000000000000
#define c7 0x20000000000000
#define b7 0x40000000000000
#define a7 0x80000000000000
#define h8 0x100000000000000
#define g8 0x200000000000000
#define f8 0x400000000000000
#define e8 0x800000000000000
#define d8 0x1000000000000000
#define c8 0x2000000000000000
#define b8 0x4000000000000000
#define a8 0x8000000000000000

//</editor-fold>

#define file_a (U64)0x8080808080808080
#define file_b (U64)0x4040404040404040
#define file_c (U64)0x2020202020202020
#define file_d (U64)0x1010101010101010
#define file_e (U64)0x808080808080808
#define file_f (U64)0x404040404040404
#define file_g (U64)0x202020202020202
#define file_h (U64)0x0101010101010101

#define rank_1 (U64)0xFF
#define rank_2 (U64)0xFF00
#define rank_3 (U64)0xFF0000
#define rank_4 (U64)0xFF000000
#define rank_5 (U64)0xFF00000000
#define rank_6 (U64)0xFF0000000000
#define rank_7 (U64)0xFF000000000000
#define rank_8 (U64)0xFF00000000000000

static constexpr u64 ranks[8] = {rank_1, rank_2, rank_3, rank_4, rank_5, rank_6, rank_7, rank_8};
static constexpr u64 files[8] = {file_a, file_b, file_c, file_d, file_e, file_f, file_g, file_h};

enum squares
{
    H1, G1, F1, E1, D1, C1, B1, A1, H2, G2, F2, E2, D2, C2, B2, A2, H3, G3, F3, E3, D3,
    C3, B3, A3, H4, G4, F4, E4, D4, C4, B4, A4, H5, G5, F5, E5, D5, C5, B5, A5, H6, G6,
    F6, E6, D6, C6, B6, A6, H7, G7, F7, E7, D7, C7, B7, A7, H8, G8, F8, E8, D8, C8, B8, A8
};

static constexpr u64 bishopBlockerMask[64] =
        {
                0x40201008040200ull, 0x402010080400ull, 0x4020100a00ull, 0x40221400ull, 0x2442800ull,
                0x204085000ull, 0x20408102000ull, 0x2040810204000ull, 0x20100804020000ull,
                0x40201008040000ull, 0x4020100a0000ull, 0x4022140000ull, 0x244280000ull,
                0x20408500000ull, 0x2040810200000ull, 0x4081020400000ull, 0x10080402000200ull,
                0x20100804000400ull, 0x4020100a000a00ull, 0x402214001400ull, 0x24428002800ull,
                0x2040850005000ull, 0x4081020002000ull, 0x8102040004000ull, 0x8040200020400ull,
                0x10080400040800ull, 0x20100a000a1000ull, 0x40221400142200ull, 0x2442800284400ull,
                0x4085000500800ull, 0x8102000201000ull, 0x10204000402000ull, 0x4020002040800ull,
                0x8040004081000ull, 0x100a000a102000ull, 0x22140014224000ull, 0x44280028440200ull,
                0x8500050080400ull, 0x10200020100800ull, 0x20400040201000ull, 0x2000204081000ull,
                0x4000408102000ull, 0xa000a10204000ull, 0x14001422400000ull, 0x28002844020000ull,
                0x50005008040200ull, 0x20002010080400ull, 0x40004020100800ull, 0x20408102000ull,
                0x40810204000ull, 0xa1020400000ull, 0x142240000000ull, 0x284402000000ull,
                0x500804020000ull, 0x201008040200ull, 0x402010080400ull, 0x2040810204000ull,
                0x4081020400000ull, 0xa102040000000ull, 0x14224000000000ull, 0x28440200000000ull,
                0x50080402000000ull, 0x20100804020000ull, 0x40201008040200ull
        };

static const float rookValue = 5, knightValue = 2.5, bishopValue = 3, kingValue = 10000,
                    queenValue = 9, pawnValue = 1;

#endif
