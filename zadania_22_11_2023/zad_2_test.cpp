#include "gtest/gtest.h"
#include "../algorithms/Sorting.h"
#include "../algorithms/Array_tools.h"

TEST(QuickSortTest, SingleElementArray) {
    int arr[1]{
            1
    };
    Sorting::Quick_sort(arr, 0, 0);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 1));
}

// Test dla tablicy już posortowanej
TEST(QuickSortTest, SortedArray) {
    int arr[5] {
            1, 2, 3, 4, 5
    };
    Sorting::Quick_sort(arr, 0, 4);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 5));
}

// Test dla tablicy posortowanej malejąco
TEST(QuickSortTest, ReverseSortedArray) {
    int arr[5] {5, 4, 3, 2, 1};
    Sorting::Quick_sort(arr, 0, 4);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 5));
}

// Test dla losowej tablicy
TEST(QuickSortTest, RandomArray) {
    int arr[11] {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    Sorting::Quick_sort(arr, 0, 10);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 11));
}