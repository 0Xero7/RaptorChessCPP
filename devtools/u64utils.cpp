
#include "u64utils.h"
#include "../Constants.h"
#include <iostream>


void u64utils::Display(U64 arg)
{
    std::cout << "\n";
    for (int i = 7; i >= 0; i--)
    {
        for (int j = 7; j >= 0; j--)
        {
            if ((arg >> (U64) ((i * (int) 8) + j)) & (U64) 1)
                std::cout << "*|";
            else
                std::cout << " |";
        }
        std::cout << "\b " << std::endl;
    }
    std::cout << "\n";
}