#include <iostream>
using namespace std;

int arraya [5] = {1, 9, 4, 5, 11} , n=5;

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition (int low, int high){
    int pivot = arraya[high];
    int i = (low - 1);
    for (int j=low; j<high; j++) {
        if (arraya[j] <= pivot){
            i++;    
            swap (&arraya[i], &arraya[j]);
        }
    }
    swap (&arraya[i], &arraya[j]);
    return (i + 1);
}

void quicksort (int low, int high) {
    if (low<high){

    }
}