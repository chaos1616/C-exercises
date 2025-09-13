//Use strncat to appens part of a string to another string

#include <stdio.h>
#include <string.h>

int main(void){
  char str1[100], str2[100];
  int len;

  printf("input the first string:\n");
  fgets(str1, 99, stdin);
  printf("input the second string:\n");
  fgets(str2, 9, stdin);

  printf("length of string 2 to append: ");
  scanf("%d", &len);
  
  strncat(str1, str2, len);

  printf("the concatenated string: %s\nits new length is %zu.\n", str1, strlen(str1));
  
  return 0;
}
