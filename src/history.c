#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List *init_history(){
    List *list = malloc(sizeof(List)); // allocates memory the size of the list
    list->root = malloc(sizeof(Item)); // allocates memory for the initial item known as root
    return list;
}

void add_history(List *list, char *str){
    int identifier = 1;
    Item *temp = list->root;

    while(temp->next != 0){
        temp = temp->next;
        identifier++;
    }

    // allocate memory for the given string
    temp->next = malloc(sizeof(Item));
    temp->next->str = copy_str(str, sizeof(str));
    temp->next->identifier = identifier;
}