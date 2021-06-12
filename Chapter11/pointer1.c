#include <stdio.h>

int main(void) {
	int a=2005;
	int* pA = &a;	//& 주소값을 참조 할 때 사용하는 연산자 변수 a의 값을 구한다. int* pA는 포인터 변수이다.  변수 이름을 통한 접근이므로 Direct Access
			
	printf("pA: %d \n" , pA);
	printf("&a : %d \n" , &a);

	(*pA)++;	// * 포인터가 가르키는 메모리 공간에 존재하는 값을 참조. 포인터 변수 pA를 통한 접근이므로 Indirect Access 이다. 

	printf("a: %d \n" , a);
	printf("*pA : %d \n" , *pA);

	return 0;

}
