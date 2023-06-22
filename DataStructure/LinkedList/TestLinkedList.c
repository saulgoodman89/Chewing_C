#include "LinkedList.h"

/*
LinkedList의 장점
- 다음 노드를 가르키는 포인터 때문에 각 노드마다 4byte의 메모리가 추가로 필요.
- 특정 위치에 있는 노드를 얻는 비용이 크며 속도도 느림.
노드의 개수가 n이면 최악의 경우 n회의 노드 탐색 루프를 실행해야 특정 위치에 노드를 찾을 수 있음.
배열의 경우 상수 시간에 노드를 얻을 수 있다.

LinkedList의 단점
- 새로운 노드의 추가/삽입/삭제가 쉽고 빠르다.
배열의 경우 삽입/제거가 어려움. 
- 현재 노드의 다음 노드를 얻어오는 연산에 대한 비용이 발생하지 않음.

! 노드의 추가/삽입/삭제는 빠르나 특정 위치의 노드를 찾는 연산은 느리다. 
-> 레코드의 추가/삽입/삭제가 잦고 조회는 드문 곳.
ex) DB 조회 해온 레코드를 순차적으로 다룰 때 


   */


int main(void) 
{
	int i = 0;
	int count = 0;
	Node *list = NULL;
	Node *current = NULL;
	Node *newNode = NULL;

	for(i=0; i<5; i++)
	{
		newNode = SLL_CreateNode(i);
		SLL_AppendNode(&list , newNode);

	}


	newNode = SLL_CreateNode(-1);
	SLL_InsertNewHead(&list, newNode);

	newNode = SLL_CreateNode(-2);
	SLL_InsertNewHead(&list,newNode);

	count = SLL_GetNodeCount(list);
	for(i=0; i<count; i++)
	{
		current = SLL_GetNodeAt(list,i);
		printf("List[%d] : %d \n",i,current->data);
	}

	printf("리스트의 세 번째 노드 뒤에 새 노드 삽입\n");
	current = SLL_GetNodeAt(list , 2);
	newNode = SLL_CreateNode(3000);

	SLL_InsertAfter(current,newNode);

	count = SLL_GetNodeCount(list);
	for(i=0; i<count; i++)
	{
		current = SLL_GetNodeAt(list , i);
		printf("List[%d] : %d \n",i,current->data);
	}

	printf("\n 모든 노드를 메모리에서 제거 \n");

	for(i=0; i<count; i++)
	{
		current = SLL_GetNodeAt(list , 0);

		if(current != NULL)
		{
			SLL_RemoveNode(&list , current);
			SLL_DestroyNode(current);
		}
	}

	return 0;
}
