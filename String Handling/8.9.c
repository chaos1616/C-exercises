//use strcat to concatenate two strings together
#include <stdio.h>
#include <string.h>

int main(void){
  char str1[100], str2[100];
  printf("input a string with a length of less than 100: \n");
  fgets(str1, 99, stdin);

  printf("input another string: \n");
  fgets(str2, 99, stdin);

  printf("\n%s\n%s\n", str1, str2);
  strcat(str1, str2);
  printf("Concatenated output: %s", str1);

  return 0;
}
