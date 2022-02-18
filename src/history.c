#include <stdio.h>
#include <stdlib.h>
#include "history,h"

// in order to implement the history method we will need a linked list data structure
struct Node
{
    char[] data;           // string data
    struct Node* next;     // pointer to next node
};

struct Node* newNode(char[] data)
{
    // allocate a new node in a linked list and using malloc set its data
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));

    // set the .next pointer of the new node to point to null
    node->next = NULL;

    return node;
};

struct Node* construct_list()
{
    // construct three linked list nodes and rearrange pointers to construct a list
    struct Node* one = NULL;
    struct Node* two = NULL;
    struct Node* three = NULL;

    one = (struct Node*)malloc(sizeof(struct Node));
    two = (struct Node*)malloc(sizeof(struct Node));
    three = (struct Node*)malloc(sizeof(struct Node));

    struct Node* head = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    // return a pointer to the first node in the list
    return head;
};

