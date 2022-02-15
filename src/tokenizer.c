#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

int space_char(char c)
{
    /* we check if the current char in the string is a white space */

    if (char c == ' ' | char c == '\t' | char c == '\n'){
        return true;
    }
    return false;
}

int non_space_char(char c)
{
    /* we check if the current char in the string is not a white space */
    if (char c != ' ' | char c != '\t' | char c != '\n'){
        return true;
    }
    return false;
}

char *word_start(char *str)
{
    /* returns the pointer to the first non-space char om the first word of the user input  */

}

char *word_terminator(char *word)
{
    /* returns the pointer to the char after the end of word */

}

int count_words(char *str)
{
    /* returns the number of words in the user input */

}

char *copy_str(char *inStr, short len)
{

}

char **tokenize(char* str)
{

}