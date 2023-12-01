#include "../algorithms/Array_tools.h"
#include "../algorithms/Sorting.h"
#include "gtest/gtest.h"

// Test dla tablicy jednoelementowej
TEST(SelectionSortTest, SingleElementArray) {
    int arr[1]{
            1
    };
    Sorting::Selection_sort(arr, 1);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 1));
}

// Test dla tablicy już posortowanej
TEST(SelectionSortTest, SortedArray) {
    int arr[5]{
            1, 2, 3, 4, 5
    };
    Sorting::Selection_sort(arr, 5);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 5));
}

// Test dla tablicy posortowanej malejąco
TEST(SelectionSortTest, ReverseSortedArray) {
    int arr[5]{5, 4, 3, 2, 1};
    Sorting::Selection_sort(arr, 5);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 5));
}

// Test dla losowej tablicy
TEST(SelectionSortTest, RandomArray) {
    int arr[11]{3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    Sorting::Selection_sort(arr, 11);
    ASSERT_TRUE(Array_tools::Is_sorted(arr, 11));
}