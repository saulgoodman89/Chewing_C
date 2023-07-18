#include "ArrayStack.h"

int main( void )
{
    int i=0;
    ArrayStack* stack = NULL;
    AS_CreateStack(&stack,10);
    AS_Push(stack,3);
    AS_Push(stack,37);
    AS_Push(stack, 11);
    AS_Push(stack, 12);

    printf("Capacity : %d , Size : %d , Top : %d \n\n", stack->Capacity, AS_GetSize(stack), AS_Top(stack));

    for(i=0; i<4; i++)
    {
	if( AS_IsEmpty(stack) )
	    break;

	printf("Popped : %d " , AS_Pop(stack));

	if(!AS_IsEmpty(stack))
	    printf("Current Top: %d \n", AS_Top(stack));
	else
	    printf("Stack is empty \n");

    }

    AS_DestroyStack(stack);
    return 0;

}
