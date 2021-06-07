#include <stdio.h>

int main(void) {
	int a=0;
	int b=0;

	a=printf("12345");
	b=printf("I love my home ");

	printf("%d %d \n", a,b);

	/*
		12345
		I love my home
		7 16

		모니터에 출력한 데이터의 크기를 바이트 단위로 변환. i
	*/
	return 0;
}
