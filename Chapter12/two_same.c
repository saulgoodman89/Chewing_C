#include<stdio.h>
int main(void) {
	int arr[2] = {1,2};
	int* pArr=arr;

	printf("%d, %d \n", arr[0], *(arr+1));
	printf("%d, %d \n", pArr[0], *(pArr+1));
	/*
		arr[i] == *(arr+i)
		배열 이름을 포인터처럼 사용할 수 있고 , 반대로 포인터를 배열 이름처럼 사용 할 수도 있다. 
	*/
	return 0;

}
