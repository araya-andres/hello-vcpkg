#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(insertion_sort, happy_path)
{
    std::vector<int> array{61, 82, 67, 4, 98, 20, 37, 85};
    insertion_sort(array);
    EXPECT_THAT(array, ::testing::ElementsAreArray({4, 20, 37, 61, 67, 82, 85, 98}));
}
