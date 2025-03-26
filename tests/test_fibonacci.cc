#include <gtest/gtest.h>
#include "fib.h"

TEST(mylib, f0_is_equal_to_0)
{
    EXPECT_EQ(fib(0), 0);
}

TEST(mylib, f1_is_equal_to_1)
{
    EXPECT_EQ(fib(1), 1);
}

TEST(mylib, f2_is_equal_to_1)
{
    EXPECT_EQ(fib(2), 1);
}

TEST(mylib, f3_is_equal_to_2)
{
    EXPECT_EQ(fib(3), 2);
}