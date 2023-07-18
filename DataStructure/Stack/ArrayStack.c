#include "ArrayStack.h"

void AS_CreateStack(ArrayStack** stack , int capacity)
{
    // 스택을 저장소에 생성
    (*stack) = (ArrayStack*)malloc(sizeof(ArrayStack));

    // 입력된 capacity만큼의 노드를 저장송 ㅔ생성 . 
    (*stack)->Nodes = (Node*)malloc(sizeof(Node)*Capacity);

    // capacity , top 초기화 
    (*stack)->Capacity = capacity;
    (*stack)->Top = 0;
}

void AS_DestroyStack(ArrayStack* stack) 
{
    // 노드를 저장소에서 해제 
    free(stack->Nodes);
    // 스택을 자유 저장소에서 해제 
    free(stack);
}

void AS_Push(ArrayStack* stack , ElementType data)
{
	int position = stack->top;
	stack->Nodes[Position].Data = data;
	Stack->Top++;
}

ElementType AS_Pop(ArrayStack* stack)
{
	int position = --(Stack->Top);
	return stack->Nodes[Position].Data;
}

ElementType AS_Top(ArrayStack* stack)
{
    int position = Stack->Top-1;
    return stack->Nodes[Position].Data;
}

int AS_GetSize(ArrayStack* stack)
{
	return stack->Top;
}

int AS_IsEmpty(ArrayStack* stack)
{
    return (Stack->Top == 0);
}
