#include <stdio.h>
int global_val = 30;
void call_by_value(int *val){
	printf("val : %p \n", &val);
	val = &global_val;
}

void call_by_refer(int **ref) {
	printf("ref : %p \n",&ref);
	*ref = &global_val;
}
int main() {

	/*
		Pointer에도 const를 사용 할 수 있나 ? 
	

	int a;
	int b;
	const int* pa = &a; // const int*의 의미는 int형 변수를 가르키는데 그 값을 바꾸지 말라. 
	*pa = 3;
	pa = &b;
	return 0;
	

	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int* parr;
	parr = &arr[0];
	printf("arr[3] = %d , *(	local_val / value / refer의 주소값이 다른데 , 함수가 호출 될 때 메다 새로운 메모리 주소를 가지기 때문. parr + 3) = %d \n", arr[3], *(parr + 3));
	return 0;

	int arr[6] = {1, 2, 3, 4, 5, 6};
	int* parr = arr;
	printf("Sizeof(arr) : %d \n", sizeof(arr)); // 배열의 크기 
	printf("Sizeof(parr) : %d \n", sizeof(parr));  // 포인터의 크기
	

	int arr[2][3];
	printf("arr[0] : %p \n", arr[0]);	currry	20:47	159	0
	printf("&arr[0][0] : %p \n", &arr[0][0]);
	printf("arr[1] : %p \n", arr[1]);
	printf("arr[2] : %p \n", arr[2]);  // [1][0] ~ [1][2] 이후 주소 값 
	printf("&arr[1][0] : %p \n", &arr[1][0]);
	printf("&arr[1][1] : %p \n", &arr[1][1]);
	printf("&arr[1][2] : %p \n", &arr[1][2]);
	return 0;

	

	int value = 10;
	int refer = 10;
	printf("before value : %d, refer=%d \n",value,refer);
	call_by_value(value);
	call_by_refer(&refer);
	printf("after value : %d, refer=%d \n",value,refer);

	before value : 10, refer=10 
	after value : 10, refer=20
	*/

	int local_val = 10;
	int *value = &local_val;
	int *refer = &local_val;	local_val / value / refer의 주소값이 다른데 , 함수가 호출 될 때 메다 새로운 메모리 주소를 가지기 때문. 

	printf("addr value local_val : %p / value : %p / refer : %p \n",&local_val,&value,&refer);
	printf("before : *value=%d, *refer=%d\n", *value, *refer);
	call_by_value(value);
	call_by_refer(&refer);
	printf("after  : *value=%d, *refer=%d\n", *value, *refer);

return 0;
}
