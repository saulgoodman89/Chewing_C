#include <stdio.h>
int add(int i, int j) {
	int result = i+j;
	return result;
}

void result_print(int val) {
	printf("덧셈에 대한 결과 : %d \n", val);
	printf("***** END ***** \n");
}

int input(void) {
	int input;
	scanf("%d", &input);
	return input;
}

int main(void) {
	int d;
	d = add(3,4);
	printf("%d \n",d);
	result_print(d);
	input();
	return  0;
}
