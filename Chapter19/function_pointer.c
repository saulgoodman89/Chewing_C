#include<stdio.h>

void Add(int a, int b);
void SPrint(char *str);

int main(){ 
	/*
	 *
	 *	함수 포인터란 ? 
	 *	메모리에 올라가있는 함수를 가리킬 수 있는 포인터를 의미 
	 *	
	 *	int fct1(int a) {
	 *		a++
	 *		return a;
	 *	}
	 *	fct1의 포인터 타입은 리턴형이 int 이고 전달인자가 int형 변수 하나이다. 
	 *
	 * 	double fct2(double a, double b) {
	 *		double add = a+b;
	 *		return add;
	 *
	 * 	}
	 * 	fct2는 리턴형이 double 이고 double 인자를 두 개 전달받는 포인터 타입 
	 *
	 *
	 * 	int (*fPtr1)(int);		함수형 포인터 fPtr1은 리턴형이 int 이고 int형 인자 1개를 전달받는 모든 함수를 가리키는 포인터  
	 * 	void (*fPtr2)(int, int);	리턴여 void이고 int형 인자 2개를 전달 받는 모든 함수를 가리키는 함수 포인터 
	 */
	
	char *string = "Function Pointer";
	int a=10 , b=20;

	void (*fPtr1)(int,int)=Add;
	void (*fPtr2)(char*)=SPrint;

	//함수 포인터에 의한 호출 
	fPtr1(a,b);
	fPtr2(string);

	return 0;
}

void Add(int a, int b) {
	printf("덧셈 결과 : %d \n",a+b);
}

void SPrint(char *str) {
	printf("입력된 문자열 : %s \n", str);
}

