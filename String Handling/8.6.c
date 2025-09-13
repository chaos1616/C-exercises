//input a line of text into array. output in alternating lower and upper letters

#include <stdio.h>
#include <ctype.h>

int countarr(char []);
// count the number of elements in a string

int main(void){
  int length, count = 0;
  char s[100];
  printf("Type in a sentence: \n");
  fgets(s, 99, stdin);
  
  length = countarr(s);
  
  for(size_t i = 0; i < length; i++){
    if(count % 2 == 0 && isalpha(s[i])){
      printf("%c", toupper(s[i]));
      count++;
    }
    else if(count % 2 != 0 && isalpha(s[i])){
      printf("%c", tolower(s[i]));
      count++;      
    }
    else{
      printf("%c", s[i]);
    }
  }  

  return 0;
}

int countarr(char a[]){
  int count = 0;
  
  while(a[count] != '\0'){
    count++;
  }

  return count + 1;
}
// modified the initial program to interchange only alphabets since those are the only characters with upper and lower cases.
// COMPLETED
