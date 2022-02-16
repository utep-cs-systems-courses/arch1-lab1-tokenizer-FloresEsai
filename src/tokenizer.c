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
    /* returns the pointer to the first non-space char of the first word of the user input  */
    /* if the string contains no words we return the zero pointer */
    while (*str != '\0'){
        if (*str == non_space_char){
            // here is where i am stuck
        }
    }
}

char *word_terminator(char *word)
{
    /* returns the pointer to the char after the end of word */
    while(*word != '\0'){
        // if the next index of the word is the terminator
        // we take the current index and return it as our word terminator
        // here i am also stuck

    }
}

int count_words(char *str)
{
    /* returns the number of words in the user input */
    int count = 0;
    // while we are not at the string terminator
    // we check when a word begins and ends
    // and each time we increment the count and return it once we hit \0
    while (*str != '\0'){
        str = word_start(str);
        str = word_terminator(word:str);
        count++;
    }
    return count;
}

char *copy_str(char *inStr, short len)
{
    /* returns a allocated zero terminated vector of allocated space-seperated tokens from zero terminated str
    * we assign a pointer to the same address as inStr
    * we create a new pointer and allocate the needed amount of space to create a new array of the same size
    * while the pointer to the string is not currently the string terminator we set the current index
    * of the to_be_copied to hold the same value as the current index of ptr
    * increment each index of both arrays and once we are finished reset the pointer to the beginning of the array
    * return the copied string */
    char *ptr = inStr;
    char *to_be_copied = (char *)malloc(sizeof(char)*len+1);
    while (*ptr != '\0'){
        *to_be_copied = *ptr;
        ptr++;
        to_be_copied++;
    }
    while (len > 0){
        ptr--;
        to_be_copied--;
    }
    return to_be_copied;
}

char **tokenize(char* str)
{

}