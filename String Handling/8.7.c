//converts 6 integer strings to integers and finds sum and average
#include <stdio.h>
#include <string.h>

int strtoint(char s);
//should take in a single character and return its integer equivalent

int main(void){
  printf("input 6 integer string characters: \n");
  int sum = 0;
  int average; 

  for(int i = 0; i < 6; i++){
    char ch;
    scanf("%c", &ch);
    
    sum = sum + strtoint(ch);
  }
  average = sum / 6;

  printf("sum is %d and the average is %d.\n", sum, average);
  
  return 0;
}

int strtoint(char s){
  return s - 48 ;
}

// COMPLETE
