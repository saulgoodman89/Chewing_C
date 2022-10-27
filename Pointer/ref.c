#include<stdio.h>

int main() {
	int a;
	int b;

	printf("# a : %p",&a);
	printf("# b : %p",&b);

	a = 10;
	b = 20;
	
	printf("\n");
	printf("## a : %p" , &a);
	printf("## b : %p" , &b);

	a = 100;
	b = 1000;

	printf("\n");
	printf("### a : %p",&a);
	printf("### b : %p \n",&b);

}
