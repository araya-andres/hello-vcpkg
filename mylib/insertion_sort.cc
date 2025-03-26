#include "insertion_sort.h"

void insertion_sort(std::vector<int> &array)
{

    for (auto i = 1; i < array.size(); i++)
    {
        const auto current = array[i];
        auto j = i - 1;
        while (j >= 0 && array[j] > current)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = current;
    }
}