// quicksort.hpp
#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

void quicksort(int array[], int length, bool ascending = true);
void quicksort_recursion(int array[], int low, int high, bool ascending);
int partition(int array[], int low, int high, bool ascending);

#endif // QUICKSORT_HPP