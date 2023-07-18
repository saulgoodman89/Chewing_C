#include "CircularDoubleLinkedList.h"

/*
   Node 생성
  */
Node *CDLL_CreateNode(ElementType NewData) 
{
	Node *NewNode = (Node*)malloc(sizeof(Node));
	NewNode->Data = NewData;
	NewNode->PrevNode = NULL;
	NewNode->NextNode = NULL;

	return NewNode;
}

/*
   Node 없앰. 
   */
void CDLL_DestroyNode(Node *Node) 
{
	free(Node);
}

/*
	리스트 끝에 새로운 Node 추가 
   */
void CDLL_AppendNode(Node **Head , Node *NewNode)
{
	if(*Head == NULL) // 리스트가 비어있음. 
	{
		*Head = NewNode;  // Head를 Newnode로 할당. 
		(*Head)->NextNode = *Head; // NextNode / PrevNode 모두 Head로 할당. 노드 자체가 원형 리스트 이다. 
		(*Head)->PrevNode = *Head;
	}else  // 리스트가 비어있지 않음. 
	{
		Node *Tail = (*Head)->PrevNode; // Tail Node에 Head의 PrevNode 가르킨다.
		Tail->NextNode->PrevNode = NewNode; // Tail Node의 nextNode의 prevNode는 NewNode를 가르킨다.  
		Tail->NextNode = NewNode; // 새로운 노드가 마지막 노드를 가르킨다. 

		NewNode->NextNode = (*Head); //새로운 노드가 첫 번째 노드를 가르킨다. 
		NewNode->PrevNode = Tail;  // 새로운 노드의 이전 노드는 마지막 노드가 된다. 
	}
}

/*
   노드를 특정 노드 뒤에 삽입 
   NewNode가 Current 다음에 삽입되며 리스트가 갱신된다. 
   */
void CDLL_InsertAfter(Node *Current, Node *NewNode) 
{
	NewNode->NextNode = Current->NextNode; // 새 노드의 NextNode를 Current의 Next Node로 
	NewNode->PrevNode = Current; // 새 노드의 PrevNode를 Current로 

	Current->NextNode->PrevNode = NewNode; 
	Current->NextNode = NewNode;
}

void CDLL_RemoveNode(Node **Head , Node *Remove)
{

    if(*Head == Remove)
    {
	(*Head)->PrevNode->NextNode = Remove->NextNode;
	(*Head)->NextNode->PrevNode = Remove->PrevNode;

	*Head = Remove->NextNode;

	Remove->PrevNode = NULL;
	Remove->NextNode = NULL;
    }else 
    {
	Node *Temp = Remove;
	Remove->PrevNode->NextNode = Temp->NextNode;
	Remove->NextNode->PrevNode = Temp->PrevNode;

	Remove->PrevNode = NULL;
	Remove->NextNode = NULL;
    }
}

Node *CDLL_GetNodeAt(Node *Head , int Location) 
{
	Node *Current = Head;
	while(Current != NULL && (--Location)>=0)
	{
	    Current = Current->NextNode;
	}
	return Current;
}

int CDLL_GetNodeCount(Node *Head)
{
	unsigned int Count = 0;
	Node *Current = Head;

	while( Current != NULL )
	{
	    Current = Current->NextNode;
	    Count++;
	
	if( Current == Head )
	    break;
	}

	return Count;
}

void PrintNode(Node *_Node)
{
	if(_Node->PrevNode == NULL)
	    printf("Prev : NULL");
	else
	    printf("Prev : %d " , _Node->PrevNode->Data);

	printf(" Current : %d " , _Node->Data);

	if(_Node->NextNode == NULL) 
	    printf("Next : NULL \n");
	else
	    printf("Next : %d \n", _Node->NextNode->Data);
}
