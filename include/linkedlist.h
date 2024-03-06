/**************************************************************************
 *  File:	linkedlist.h - Definition file for Linked List

 *  Author:	Devashish Dewangan CS21M017
 *************************************************************************/


#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
};

struct Node* createNode(int data);
void insertNode(struct LinkedList* list, int data, int position);
void deleteNode(struct LinkedList* list, int position);
void traverseNode(struct LinkedList* list);

#endif

