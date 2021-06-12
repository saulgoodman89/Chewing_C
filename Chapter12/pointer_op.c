#include <stdio.h>

int main(void) {
	int* ptr1 = 0;
	char* ptr2=0;
	double* ptr3=0;
	// 포인터 변수를 0으로 초기화 하는데 0이라는 값은 메모리 주소를 말하는 것이 아닌 , 아무것도 가리키지 않는다는 의미다. 이를 Null pointer라고 한다. 

	printf("%d번지 , %d 번지 , %d 번지 \n ", ptr1++,ptr2++,ptr3++);
	//기존 ptr 주소에 1을 더한다. 
	printf("%d번지 , %d 번지 , %d 번지 \n" , ptr1,ptr2,ptr3);
}
