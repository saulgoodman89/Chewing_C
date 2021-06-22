#include<stdio.h>

float PI = 3.14;

int main(void) {
	float rad;
	PI=3.07;
	scanf("%f" , &rad);
	printf("원의 넓이는 %f \n" , rad*rad*PI);

	return 0;

}
