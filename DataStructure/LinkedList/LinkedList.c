#include "LinkedList.h"

Node *SLL_CreateNode(ElementType newData) 
{
    Node *newNode = (Node*)malloc(sizeof(Node)); // newNode에 메모리 동적 할당
    newNode->data = newData;	//data 값 초기화 
    newNode->nextNode = NULL;	// nextNode 값 NULL로 초기화 

    return newNode;
}

void SLL_DestroyNode(Node *node)
{
	free(node);
}

void SLL_AppendNode(Node **head , Node *newNode) 
{
	if((*head) == NULL)
	{
		*head = newNode;
	}else {
		Node *tail = (*head);
		while(tail->nextNode != NULL)
		{
			tail = tail->nextNode;
		}
	tail->nextNode = newNode;
	}
}

void SLL_InsertAfter(Node *current , Node *newNode) 
{
	newNode->nextNode = current->nextNode;
	current->nextNode = newNode;
}

void SLL_InsertNewHead(Node **head , Node *newNode) 
{
	if(*head == NULL)
	{
		(*head) = newNode;
	}else {
		newNode->nextNode = (*head);
		(*head) = newNode;
	}
}

Node *SLL_GetNodeAt(Node *head , int location) 
{
	Node *current = head;

	while (current != NULL && (--location) >= 0) 
	{
		current = current->nextNode;
	}
	return current;
}

int SLL_GetNodeCount(Node *head) 
{
	int count = 0;
	Node *current = head;

	while(current != NULL) 
	{
		current = current->nextNode;
		count++;
	}
	return count;
}

void SLL_RemoveNode(Node **head , Node *remove) 
{
	if( *head == remove )
	{
	    *head = remove->nextNode;
	}else {
		Node *current = *head;
		while( current != NULL && current->nextNode != remove )
		{
			current = current->nextNode;
		}

		if(current != NULL) 
		{
			current->nextNode = remove->nextNode;

		}
	}
}
