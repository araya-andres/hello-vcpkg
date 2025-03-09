#include <gtest/gtest.h>
#include "fib.h"

TEST(mylib, f0_is_equal_to_0)
{
    EXPECT_EQ(fib(0), 0);
}