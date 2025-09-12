#include <stdio.h>

int unionize(int x[], int y[], int z[], int, int, int);
// the first two are the sets to be unionized, z is to store the output

int main(void){
  int set1[10] = {0};
  int set2[10] = {0};
  int result[20] = {0};

  printf("SET 1: ");
  for(size_t i = 0; i < 10; i++){
    printf("input: ");
    scanf("%d", &set1[i]);
  }
  printf("SET 2: ");
  for(size_t i = 0; i < 10; i++){
    printf("input: ");
    scanf("%d", &set2[i]);
  }
  
  int value = unionize(set1, set2, result, 10, 10, 20);
  
  for(size_t i = 0; i < value; i++){
    printf("%d", result[i]);
  }
  
  return 0;
}

int unionize(int x[], int y[], int z[], int a, int b, int c){
  int z_count = 0;
  for(size_t i = 0; i < a; i++){
    int check  = 0;
    for(size_t j = 0; j < z_count; j++){
      if(x[i] == z[j]){
        check++;
      }	    
    }
    if(check == 0){
      z[z_count] = x[i];    
      z_count++;
    }
  }
	
  for(size_t i = 0; i < b; i++){
    int check1 = 0;
    for(int j = 0; j <= z_count ; j++){
      if(y[i] == z[j]){
        check1++;
      }
    }
    if(check1 == 0){
      z[z_count++] = y[i]; 
    }
  }
		 
  return z_count;
}
