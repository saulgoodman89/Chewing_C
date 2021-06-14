#include <stdio.h>

int main(void) {
	char str1[5]="abcd";
	char *str2="ABCD";

	printf("%s \n", str1);
	printf("%s \n" , str2);
	printf("%p \n", &str1);
	printf("%p \n" , &str2);
	str1[0]='x';
	//str2[0]='x';

	printf("%s \n" , str1);
	printf("%s \n" , str2);


	char *str = "ABCDEFG";
	/*
		문자열 상수는 메모리 공간에 저장되면 , 그 순간 문자열 상수의 주소 값이 반환된다. 
		문자열 상수의 주소는 문자열의 첫 번째 주소이므로 char형의 포인터 타입이다. 
	*/
	return 0;

}
