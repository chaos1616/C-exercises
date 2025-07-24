//(Selection Sort) A selection sort algorithm for a one-dimensional array has the
//following steps:
//1. The smallest value in the array is found.
//2. It is swapped with the value in the first position of the array.
//3. The above steps are repeated for the rest of the array starting at the second
//position and advancing each time.
//Eventually the entire array is divided into two parts: the sub-array of items already
//sorted which is built up from left to right and is found at the beginning, and the sub-
//array of items remaining to be sorted, occupying the remainder of the array. Write a
//program that sorts an array of 10 integers using this algorithm.
#include <stdio.h>

void selection_sort(int n[], int size); //function prototype

int main(void){
  int array[10] = {1100, 2000, 43, 876, 943, 542, 56, 543, 532, 1000};

  selection_sort(array, 10);

//print the sorted array
  for(size_t i = 0; i < 10; ++i){
    printf("%5d", array[i]);
  }
  
  printf("\n");
}

void selection_sort(int n[], int size){ //function definition
  int smallest; // to hold the smallest value
  int pos;
  for(size_t swap = 0; swap < size - 1 ; ++swap){
    smallest = n[swap];
    for(size_t i = swap; i < size - 1; ++i){
      if(n[i + 1] < smallest){
        smallest = n[i + 1];
        pos = i + 1;
      }
    }  
    int hold = n[swap];
    n[swap] = smallest;
    n[pos] = hold;
  }
} 
//COMPLETE

