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
    /* if the string contains no words we return the zero pointer */

}

char *word_terminator(char *word)
{
    /* returns the pointer to the char after the end of word */

}

int count_words(char *str)
{
    /* returns the number of words in the user input */
    int count = 0;
    while (*str != '\0'){
        str = word_start(str);
        str = word_terminator(word:str);
        count ++;
    }
    return count;
}

char *copy_str(char *inStr, short len)
{
    /* returns a allocated zero terminated vector of allocated space-seperated tokens from zero terminated str */
    // allocate space, traverse the string

}

char **tokenize(char* str)
{

}