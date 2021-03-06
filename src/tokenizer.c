#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int space_char(char c)
{
    /* we check if the current char in the string is a white space */
    return c == ' ' || c == '\t' ? 1:0;
}

int non_space_char(char c)
{
    /* we check if the current char in the string is not a white space */
    return c != ' ' && c != '\t' && c != '\0' ? 1 : 0;
}

char *word_start(char *str)
{
    int index;
        for(index = 0; *(str + 1) != '\0'; index++){
            if(non_space_char(*(str + 1))){
                return str + 1;
            }
        }
    return str + 1; // if this line is reached then the beginning of the input is the start
}

char *word_terminator(char *word)
{
    int index;
        for(index = 0; *(word + index) != '\0'; index++){
            if(space_char(index)){
                return word + index;
            }
        }
    return word + index;
}

int count_words(char *str)
{
  int count;                           // the total number of words in a string

    char *beginning = word_start(str);  // the first char in a string using word_start

    // we traverse the entire string and
    // if we hit a non space char we know we have finished a word and update count
    while(*beginning != '\0')
    {
        if(non_space_char(*beginning))
        {
            count += 1;
        }
        beginning = word_terminator(beginning); // if this line is reached we found the start of the word and can go to the end
        beginning = word_start(beginning); // find the start of the next word
    }
    return count; // return the total number of words in the string input
}

char *copy_str(char *inStr, short len)
{
    // allocate space corresponding to the length of the input string plus 1 (for the string terminator)
    char *copy_of_string = malloc((len + 1) * sizeof(char));

    int index; // loop index
    for(index = 0; index < len; index++)
    {
        copy_of_string[index] = inStr[index]; // index by index we copy each item from the input into string copy
    }
    copy_of_string[index] = '\0'; // we create and add the string terminator of the copied string

    return copy_of_string; // return the newly copied string
}

char **tokenize(char* str)
{
  int word_count = count_words(str);
  char **tokens = malloc(sizeof(char*) * (word_count + 1));

  str = word_start(str);
  for(int i = 0; i < word_count; ++i){
    char* terminator = word_terminator(str);
    tokens[i] = copy_str(str, terminator - str);
    str = word_start(terminator);
  }

  char **terminator = tokens + word_count;
  *terminator = 0;
  return tokens;
}

void print_tokens(char **tokens)
{
  int index;
    for(index = 0; tokens[index] != 0; index++){
        printf("%s\n", *(tokens));
    }
    printf(*tokens);
}

void free_tokens(char **tokens)
{
  int index;
    for(index = 0; tokens[index] != 0; index++){
        free(tokens[index]);
    }
    free(tokens[index]);
}
