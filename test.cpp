#include "quicksort.hpp"
#include <utility> // for std::swap

// Internal functions, not exposed in the header
void quicksort_recursion(int array[], int low, int high);
int partition(int array[], int low, int high);

void quicksort(int array[], int length)
{
    quicksort_recursion(array, 0, length - 1);
}

void quicksort_recursion(int array[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(array, low, high);
        quicksort_recursion(array, low, pivot_index - 1);
        quicksort_recursion(array, pivot_index + 1, high);
    }
}

int partition(int array[], int low, int high)
{
    int pivot_value = array[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (array[j] <= pivot_value)
        {
            std::swap(array[i], array[j]);
            i++;
        }
    }
    std::swap(array[i], array[high]);
    return i;
}
