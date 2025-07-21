// binary search over a 2d array.
#include <stdio.h>

int main(void){
  int dates[5][9] = {{34, 23, 5, 6, 7, 34, 21, 12, 56},{456, 67, 56, 56,34, 56, 1, 0, 56},{45, 56, 987, 765, 54, 65, 76, 32, 67},{476, 56, 21, 1, 1, 0, 76, 21, 34},{54, 56, 3, 5, 6, 7, 9, 0, 0}};
  int hi = 4, hj = 8, li = 0, lj = 0, mi, mj;
  int key, x = -1;
  
  printf("A key to search: ");
  scanf("%d", &key);

// a bubble sort to sort all items in the array
  for(size_t k = 0; k < 45; ++k){
    for(size_t i = 0; i < 5; ++i){
      int pi;      
      for(size_t j = 0; j < 9; ++j){
        int pj;
	if(dates[pi][pj] > dates[i][j]){
	  int hold = dates[pi][pj];
	  dates[pi][pj] = dates[i][j];
	  dates[i][j] = hold;
	}
        pi = i;
	pj = j;
      }
    }  
  }

// Once all the items have been sorted' the binary search can be performed
  for(int i; i < 20 || x == 1; ++i){
    mi = (li + hi) / 2;
    mj + (li + lj) / 2;
    if(dates[mi][mj] == key){
      printf("The key, %d' can be found at row %d, column %d", key, mi + 1, mj + 1);
      x = 1;
    }
    else if(key > dates[mi][mj]){
      li = mi;
      lj = mj;
    }
    else{
      hi = mi;
      hj = mj;
    }
  }
}  
  
