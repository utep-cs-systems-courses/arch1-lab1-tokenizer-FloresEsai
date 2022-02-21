#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"

List *init_history(){
    List *list = malloc(sizeof(List)); // allocates memory the size of the list
    list->root = malloc(sizeof(Item)); // allocates memory for the initial item known as root
    return list;
}

//
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

// we assign a pointer to the root/head of the list
// until we reach the end of the list we return the node corresponding to the identifier input
char *get_history(List *list, int identifier){
    Item *item = list->root;
    while(temp != 0){
        if(temp->identifier == identifier){ // if we reach the desired token we return it to the user
            return temp->str;
        }
        temp = temp->next;
    }
    return printf("Token Not Found"); // if the desired token is not found print error statement
}

//
void print_history(List *list){
    Item *temp = list->root->next;
    while(temp != 0){
        printf("%d. %s", temp->identifier, temp->str);
        temp = temp->next;
    }
}

// we assign a pointer to the root of the list
// until we reach the end of the list we free each node and string within the node
void free_history(List *list){
    Item *curr = list->root;
    while(curr->next != 0){
        Item *prev = curr; // the current node that is to be freed
        curr = curr->next;
        free(prev->str);
        free(prev);
    }
    free(curr->str); // free the string in the last node
    free(curr);      // free the last node
    free(list);      // free the list
}