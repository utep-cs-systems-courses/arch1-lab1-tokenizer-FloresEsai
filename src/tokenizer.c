#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

int main()
{
  printf("Welcome please enter a string");

  /* we ask for a string, store the string, then ask for a specified number
   * this number corresponds to an action within our program such as space_char
   */
  char *user_input;
  int string_size;
  
  scanf("%s", &user_input);

  string_user = (char*) malloc((string_size+1)*sizeof(char));
}

int space_char(char c)
{
  /* we check if the current char in the string is a white space */
  char *c;
  
  c = calloc(sizeof(c),50);
  if (*c != '' | *c != '\t')
    {
      return false;
    }
  
  return true;
}

int non_space_char(char c)
{
  /* we check if the current char in the string is not a white space */
  char *c;

  c = calloc(sizeof(c), 50);
  if (*c == ''| *c == '\t')
    {
      return false;
    }
  return true;
}

char *word_start(char *str)
{
  /* to be announced  */
}
