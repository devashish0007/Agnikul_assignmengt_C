// /*-------------------------------------------------------------------------
//  *  main -- Main Program for printing square of prime no. less than 20.
//  *  Author:	Devashish Dewangan CS21M017
//  -------------------------------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include "../include/linkedlist.h"


int isPrime(int n)
{
	int flag=1;
	
	for(int i=2; i<= n/2; i++)
	{
		if(n%i==0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}


void createList(struct LinkedList * linkedList, int n) 
{
    int count = 0;
    for(int i=2; i<20; i++)
    {
		if(isPrime(i)==1)
		{
			insertNode(linkedList, i, count);
			++count;
		}
	}
	
} 


int function(int n)
{
	// This function gives the value the traverse function will print.
	return n*n;
}

int main() {
	struct	LinkedList *linkedList ;
	struct LinkedList ll = {NULL};
	linkedList = &ll;
	createList(linkedList, 20);
	// define the function to be used while traversing the node value.
	traverseNode(linkedList);
	return 0;
}