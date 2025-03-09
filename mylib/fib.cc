#include "fib.h"

unsigned fib(const unsigned n)
{
    unsigned a = 0;
    unsigned b = 1;
    for (unsigned i = 0; i < n; i++)
    {
        unsigned c = a + b;
        a = b;
        b = c;
    }
    return b;
}