#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"


int main()
{
    char user_input[100];        // allocate a designated amount of memory for user input
    char *user_ptr = user_input; // pointer to be assigned to user_input
    puts("Welcome please enter a string");

    /* we ask for a string, store the string, then ask for a specified number
     * this number corresponds to an action within our program such as space_char
    */
    while (1) { // infinite while loop so that we can perform as many functions as the user requests
        fputs("Please choose which action to perform: ", stdout);
        fflush(stdout);
        int choice;
        while ((choice = getchar()) == '\n'); // ignore newlines
        if (choice == EOF)
            goto done;

        // similar to project 0 we analyze the character submitted by the user
        switch(choice){
            // cases will go here
            case 'q':
            puts("Shutting Down");
            goto done;
        }
    }
    done:
        return 0;
}
