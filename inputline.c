#include <stdio.h>

void inpline(char s[]);

int main(void){
  char line[100];
	
  printf("input a line: \n");
  inpline(line); 

  printf("%s", line);

}

void inpline(char s[]){
  size_t i = 0;
  char c;

  c = getchar();
  while(c != '\n'){
    s[i] = c;
    i++;
    c = getchar(); 
  }
  
  s[i] = '\0';
}
