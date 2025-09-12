// a program which tests a character with each of the character handling functions.\

#include <stdio.h>
#include <ctype.h>

int main(void){
  char ch;

  printf("input a character: ");
  scanf("%c", &ch);

  printf("%c %s Alphabet.\n", ch, isalpha(ch) ? "is an" : "is not an");
  printf("%c %s an Alphabet or Number.\n", ch, isalnum(ch) ? "is" : "is not");
  printf("isdigit(ch) returns %d\n", isdigit(ch));
  printf("%c %s printable character that is not space,\n", ch, isgraph(ch) ? "is a" : "is not a");
  printf("isprint(ch) returns %d signifying that %c %s printable character.\n", isprint(ch), ch, isprint(ch) ? "is a" : "is not a");
  printf("%c as a lowercase letter is %c.\n", ch, tolower(ch));
  printf("%c as an upper case letter is %c.\n", ch, toupper(ch));
  printf("%c %s lowercase letter.\n", ch, islower(ch) ? "is a" : "is not a");
  printf("%c %s uppercase charachter.\n", ch, isupper(ch) ? "is a" : "is not a");
  printf("%c %s Hexidecimal number.\n", ch, isxdigit(ch) ? "is a" : "is not a");
  printf("iscntrl(ch) returns %d.\n", iscntrl(ch))  ;
  printf("%c %s space character.\n", ch, isspace(ch) ? "is a" : "is not a");
 
  return 0;
}
