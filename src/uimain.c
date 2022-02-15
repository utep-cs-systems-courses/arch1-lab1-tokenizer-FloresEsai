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
