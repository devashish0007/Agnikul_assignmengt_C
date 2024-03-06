/*-------------------------------------------------------------------------
 *  ListFun.C - Implements the Linked List

 *  Author:	Devashish Dewangan CS21M017
 -------------------------------------------------------------------------*/

#include "../include/linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct LinkedList* list, int data, int position) {
    struct Node* newNode = createNode(data);
    
    if (position == 0) {
        newNode->next = list->head;
        list->head = newNode;
        return;
    }

    
    struct Node* current = list->head;
    for (int i = 0; i < position - 1 && current != NULL; ++i) {
        current = current->next;
    }

    if (current == NULL) {
        printf("Invalid position for insertion.\n");
        return;
    }

    newNode->next = current->next;
    current->next = newNode;
}

void deleteNode(struct LinkedList* list, int position) {
    if (list->head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }

    struct Node* temp = list->head;

    if (position == 0) {
        list->head = temp->next;
        free(temp);
        return;
    }

    for (int i = 0; temp != NULL && i < position - 1; ++i) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position for deletion.\n");
        return;
    }

    struct Node* nextNode = temp->next->next;
    free(temp->next);
    temp->next = nextNode;
}

void traverseNode(struct LinkedList* list) {
    struct Node* current = list->head;
    while (current != NULL) {
    	printf("%d ", function(current->data));
        current = current->next;
    }
    printf("\n");
}


