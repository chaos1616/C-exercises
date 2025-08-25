#include <stdio.h>

void main(void){
  int array[20];

  for(size_t i = 0; i < 20; i++){
    printf("put in a number for the array(%ld elements remaining): ", 20 - i); 
    scanf("%d", &array[i]);	  
  }
  printf("\n\n");
//print the original array
  printf("array as inputted:\n'");
  for(size_t i = 0; i < 20; i++ ){
    if(i == 10)
      printf("\n");	    
    printf("%d ", array[i]);
  }  
  printf("\n\n");

// bubble sort
  for(size_t k = 0; k <= 19; k++){
    for(size_t i = 0; i < 19; i++){
      if(array[i] > array[i + 1]){
	 int hold = array[i + 1];
    	 array[i + 1] = array[i];
	 array[i] = hold;
      }
    }
  } 

// print sorted array
  printf("sorted array: ");  
  for(size_t i = 0; i < 20; i++){  
    printf("%d ", array[i]);
  }
}


