#include <stdio.h>

int add(int a, int b);
int input(void);
void result_print(int val);
void intro(void);

int main(void) {
	int a,b;
	int output;
	intro();
	a=input();
	b=input();

	output = add(a,b);
	result_print(output);

	return 0;
}

int add(int i, int j) {

	int result = i+j;
	return result;
}

int input(void) {
	int input;
	scanf("%d", &input);
	return input;
}

void result_print(int val) {
	printf("덧셈에 대한 결과 : %d \n", val);
	printf("***** END ******");
}

void intro(void) {
	printf("***** START ***** \n");
	printf("두 개의 정수 입력 : " );
}
