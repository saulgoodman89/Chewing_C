#include "DoubleLinkedList.h"

/*
	정수 값 / prev , next Node를 가지는 노드 생성  
   */
Node *DLL_CreateNode(ElementType newData)
{
	Node *NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = newData;
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;

	return NewNode;
}

/*
	Node free
   */
void DLL_DestroyNode(Node *Node)
{
	free(Node);
}

/*
	기존 노드 Head와 새로운 노드 NewNode를 파라미터로 받는 노트 추가 함수.
	이중 연결 리스트의 끝에 새로운 노드를 추가하는 기능. 
   */
void DLL_AppendNode(Node **Head , Node *NewNode) 
{
	if((*Head) == NULL)	// 기존 노드가 NULL 이면(리스트가 비어있으면)
	{
		*Head = NewNode;  // 기존 노드를 NewNode로 초기화 하여 첫 번째 노드로 만든다. 
	}else {
		Node *Tail = (*Head); // 기존 노드를 첫번째 노드로 초기화 
		while( Tail->NextNode != NULL)  // Tail의 NextNode가 NULL이 아닐 때 까지 , 마지막 노드를 찾을 때 까지 
		{
			Tail = Tail->NextNode; //  Tail을 리스트의 마지막 노드로 이동. 
		}

		Tail->NextNode = NewNode;  // 새로운 노드를 리스트에 추가. 
		NewNode->PrevNode = Tail; // 기존의 Tail을 새 노드의 PrevNode를 가르킨다. 
	}
}


/*
	Current 노드 뒤에 새로운 노드를 삽입. 
   */
void DLL_InsertAfter(Node *Current , Node *NewNode) 
{
	NewNode->NextNode = Current->NextNode; // 새 노드의 Next는 Current의 next 이고 , 
	NewNode->PrevNode = Current;  // 새 노드의 Prev는 Current 이다. 

	if( Current->NextNode != NULL ) // 
	{
		Current->NextNode->PrevNode = NewNode;
	}
	Current->NextNode = NewNode;
}

void DLL_RemoveNode(Node **Head , Node *Remove)
{
	if(*Head == Remove) 
	{
	    *Head = Remove->NextNode;
		if((*Head) != NULL) 
		    (*Head)->PrevNode = NULL;
	Remove->PrevNode = NULL;
	Remove->NextNode = NULL;
	}else {
	    Node *Temp = Remove;

	    if(Remove->PrevNode != NULL)
		Remove->PrevNode->NextNode = Temp->NextNode;

	    if(Remove->NextNode != NULL)
		Remove->NextNode->PrevNode = Temp->PrevNode;

	    Remove->PrevNode = NULL;
	    Remove->NextNode = NULL;
	}
}

Node *DLL_GetNodeAt(Node *Head , int Location) 
{
	Node *Current = Head;
	while(Current != NULL && (--Location) >= 0)
	{
		Current = Current->NextNode;
	}

	return Current;
}

int DLL_GetNodeCount(Node *Head) 
{
	unsigned int Count = 0;
	Node *Current = Head;

	while ( Current != NULL )
	{
		Current = Current->NextNode;
		Count++;
	}
	return Count;
}
