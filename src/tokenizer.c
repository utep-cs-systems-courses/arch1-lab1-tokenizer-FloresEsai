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
            return str;
        }
    }
}

char *word_terminator(char *word)
{
    /* returns the pointer to the char after the end of word
    * if the string is empty we return NULL
    * we then traverse the word incrementing the pointer and returning the last before the terminator
    */
    if(*word == '\0'){
        printf("The string entered is empty\n");
        return NULL;
    }
    while(*word){
        word++;
    }
    word--;
    return word
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
        str = word_terminator(str);
        count++;
    }
    return count;
}

char *copy_str(char *inStr, short len)
{
     // returns a allocated zero terminated vector of allocated space-separated tokens from zero terminated str
    char *string_to_be_copied = (char *)malloc(sizeof(char)*len+1);
     // allocate space equal to the input string and +1 for the string terminator
    while (*instr != '\0'){
        char *string_to_be_copied = *inStr;
     // we assign the current index of the string to the corresponding index of the new string array
        inStr++;
        string_to_be_copied++;
     // we increment the pointers of both strings
    }
    return to_be_copied;
}

char **tokenize(char* str)
{
    /* given a string input we traverse and using word_start and word_terminator
    * we allocate memory using copy_string and with the created array assign
    * each index to be a word of the string
    */
    while(str != '\0'){
        word_start(str);
        word_terminator(str);
        copy_str(str, sizeof(str));
    }
}