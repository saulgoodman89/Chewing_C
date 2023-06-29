#include "DoubleLinkedList.h"

/*
	링크드 리스트에서 탐색 기능을 개선한 자료구조. 
	링크드 리스트는 헤드 -> 테일 방향으로만 탐색이 가능했는데 
	더블 링크드 리스트는 양방향이 가능. 
*/
int main( void )
{
	int i=0;
	int Count = 0;
	Node *List = NULL;
	Node *NewNode = NULL;
	Node *Current = NULL;

	for(i=0; i<5; i++)
	{
		NewNode = DLL_CreateNode(i);
		DLL_AppendNode(&List,NewNode);
	}

	Count = DLL_GetNodeCount(List);

	for(i=0; i<Count; i++) 
	{
		Current = DLL_GetNodeAt(List , i);
		printf("List[%d] : %d \n", i, Current->Data);
	}

	printf("\n Inserting 3000 After [2] ... \n\n");

	Current = DLL_GetNodeAt(List,2);
	NewNode = DLL_CreateNode(3000);
	DLL_InsertAfter(Current,NewNode);

	Count = DLL_GetNodeCount(List);

	for(i=0; i<Count; i++)
	{
		Current = DLL_GetNodeAt(List , i);
		printf("List[%d\ : %d \n",i,Current->Data);
	}

	printf("\n Destroying List . . . \n");

	Count = DLL_GetNodeCount(List);

	for(i=0; i<Count; i++) 
	{
		Current = DLL_GetNodeAt(List,0);

		if( Current != NULL)
		{
			DLL_RemoveNode(&List , Current);
			DLL_DestroyNode(Current);
		}

	}
	return 0;
}
