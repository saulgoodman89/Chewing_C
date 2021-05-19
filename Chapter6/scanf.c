#include <stdio.h>

int main(void) {

	float f;
	double d;

	printf("두 개의 실수 입력 : " );
	scanf("%f %le", &f, &d);
	//double형 변수를 사용하는 경우 %e가 아닌 %le를 사용해야 한다. 
	printf("입력에 대한 출력: ");
	printf("%f %e \n", f,d);
}
