#include "fib.h"

unsigned fib(const unsigned n)
{
    if (n == 0) return 0;
    unsigned a = 0;
    unsigned b = 1;
    for (unsigned i = 1; i < n; i++)
    {
        unsigned c = a + b;
        a = b;
        b = c;
    }
    return b;
}