#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"

int main(){

  char input[100];

  //declares for the list needed if they ask for a return
  List *history = init_history();

  //allows the program to run forever
  while(1){
    printf("\nEnter one of the following:\n");

    printf("1.'q'to quit\n 2. 'w' to type a sentence\n 3.'!' followed by how far you would like to go back\n 4. 'h' for the history of the program\n");

    printf("$");

    fgets(input,100,stdin);

    if(input[0] == 'q'){
      printf("exiting now\n");
      free_history(history);
      return 0;//exits the while loop

    }
    else if(input[0] == 'w'){//for the sentence

      printf("Please enter your sentence:\n$");

      fgets(input,100,stdin);
      char **tokens = tokenize(input);
      print_tokens(tokens);
      add_history(history, input);// since we need to keep track of history
      free_tokens(tokens);
    }
    else if(input[0] == '!'){
      char *hist = get_history(history,atoi(input+1));// atoi is used to convert a string argument into an integer type
      char **tokens = tokenize(hist);

      printf("Retrieved history: %s\n", hist);

      printf("Tokenized history: %s\n", tokens);

      print_tokens(tokens);
      free_tokens(tokens);
    }
    else if(input[0] == 'h'){
      print_history(history);

    }
    else{
      printf("enter a valid answer\n");
    }
  }
}