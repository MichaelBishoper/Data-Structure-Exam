#include <iostream>
#include <utility>
#include <cstdlib>
#include <ctime>
#include "quicksort.hpp"

using namespace std;


void quicksort(int array[], int length, bool ascending) {
    srand(time(NULL));  // seed for RNG
    quicksort_recursion(array, 0, length - 1, ascending);
}

void quicksort_recursion(int array[], int low, int high, bool ascending) {
    if (low < high) {
        int pivot_index = partition(array, low, high, ascending);
        quicksort_recursion(array, low, pivot_index - 1, ascending);
        quicksort_recursion(array, pivot_index + 1, high, ascending);
    }
}

int partition(int array[], int low, int high, bool ascending) {
    int pivot_index = low + (rand() % (high - low + 1));
    std::swap(array[pivot_index], array[high]);  

    int pivot_value = array[high];
    int i = low;

    for (int j = low; j < high; j++) {
        if ((ascending && array[j] <= pivot_value) || (!ascending && array[j] >= pivot_value)) {
            std::swap(array[i], array[j]);
            i++;
        }
    }

    std::swap(array[i], array[high]);  
    return i;  
}
