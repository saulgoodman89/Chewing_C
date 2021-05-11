#include <stdio.h>

int main(void) {

	int a=15; 
	int b=20;
	int c=a&b;

	printf("AND 연산 결과 : %d \n",c);

	// &  두 개의 비트가 모두 1일 때 1을 반환

	int d = a|b;
	printf("OR 연산 결과 : %d \n",d);

	// 둘중 하나라도 1이면 1 을 반환 

	int e = a^b;
	printf("XOR 연산 결과 : %d \n",e);

	//두 개의 비트가 서로 다를 경우 1을 반환 

	int f = ~a;
	printf("NOT 연산 결과 : %d \n " , b);

	//비트를 반전시킨다. 
	

}
