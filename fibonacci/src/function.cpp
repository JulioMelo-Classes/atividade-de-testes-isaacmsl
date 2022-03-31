#include "function.h"

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector<unsigned int> fib;

    int x = 1, y = 1, aux = 0;

    while(y < n) {
        if (!fib.size()) fib.push_back(x);
        fib.push_back(y);
        aux = y;
        y += x;
        x = aux;
    }

    return fib;
}
