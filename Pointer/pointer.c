#include<stdio.h>

int main() {
	
    /*
	Pointer란 ? 메모라 상에 위치한 특정한 데이터의 주소값을 보관하는 변수. 

	int* p;
	(포인터에 주소값이 저장되는 데이터의 형) *(포인터의 이름)

	& : 포인터의 주소값을 만한다

	포인터 끼리 덧셈은 안된다. 뻴셈은 가능.

    */

    /*
      포인터의 포인터
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
    printf("&pa : %p // ppa : %p \n", &pa, ppa);


    a : 0 // *pa : 0 // **ppa : 0
    &a : 0x7ffef8c6f794 // pa : 0x7ffef8c6f794 // *ppa : 0x7ffef8c6f794
    &pa : 0x7ffef8c6f798 // ppa : 0x7ffef8c6f798
    */

    /*
       배열 이름의 주소 값.
       배열의 이름은 암묵적으로 0번째 주소 값을 가르킨다. 
       but , &가 배열 이름에 오면 암묵적 변환이 이루어지지 않음. 
    int arr[3] = {1,2,3};
    int (*parr)[3] = &arr;  

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n" , (*parr)[1]);

    arr[1] : 2
    parr[1] : 2
    */

    /*
    int arr[3] = {1,2,3};
    int (*parr)[3] = &arr;  
    
    printf("arr : %p \n" , arr);
    printf("parr : %p \n", parr);

    arr : 0x7ffe40e4aa2c
    parr : 0x7ffe40e4aa2c
    */

    /*
       2차원 배열
       arr[0]은 arr[0][0]을 가르키는 포인터로 암묵적으로 타입 변환. 
       arr[1]은 arr[1][0]을 가르키는 포인터 
    int arr[2][3];

    printf("arr[0] : %p \n" , arr[0]);
    printf("&arr[0][0] :%p \n" , &arr[0][0]);
    printf("arr[1] : %p \n", arr[1]);
    printf("arr[1][0] : %p \n", &arr[1][0]);
	*/		
    return 0;
}
