#ifdef ARRAYSTACK_H
#define ARRAYSTACK_H

#include<stdio.h>
#include<stdlib.h>

typedef int ElementType;
typedef struct tagNode 
{
    ElementType Data;
} Node;

typedef struct tagArrayStack
{
    int capacity;
    int top;
    Node *Nodes;
} ArrayStack;

void AS_CreateStack(ArrayStack** stack , int capacity);
void AS_DestroyStack(ArrayStack* stack);
void AS_Push(ArrayStack* Stack, ElementType Data);
ElementType AS_Pop(ArrayStack* stack);
ElementType AS_Top(ArrayStack* stack);
int AS_GetSize(ArrayStack* Stack);
int AS_IsEmpty(ArrayStack* Stack);

#endif
