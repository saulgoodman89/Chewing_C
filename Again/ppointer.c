#include<stdio.h>

//int add_number(int *parr);

//void swap(int*, int*);

//int swap(int *a, int *b) {
//	int temp = *a;
//	*a=*b;
//	*b=temp;

//	return 0;
//}

// int change_val(int *i) {
//	printf("pi의 값 : %p \n",i);
//	printf("pi가 가리키는 것의 값 : %d \n", *i);
//	*i = 3;
//	return 0;
// }

int max_number(int *parr) {	// 배열 arr을 param으로 받는다.
	int i;
	int max = parr[0];  // 최대값을 parr[0] 으로 초기화 한다. 

	for(i=1; i<10; i++) {	// parr[1] 부터 parr[9] 까지 parr[i] 값이 max 보다 큰지 비교하고 , 크다면 max 값에 초기화 한다. 
	    if(parr[i]>max) {
	    	max=parr[i];
	    }
	}
	return max;
}

int main() {
	//int a;
	//int *pa;
	//int **ppa;

	//pa = &a;
	//ppa = &pa;

	//a = 3;
	//printf("a : %d \\ *pa : %d // **ppa : %d \n",a,*pa,**ppa);
	//printf("&a : %p // pa : %p // *ppa : %p \n" , &a , pa , *ppa);
	//printf("&pa : %p // ppa : %p \n" , &pa , ppa);

//	int num1 = 10, num2 = 20;
//	int* ptr1, * ptr2;	// ptr1 , ptr2 포인터 선언 
//	ptr1 = &num1, ptr2 = &num2; // ptr1 포인터를 num1로 초기화 , ptr2 포인터를 num2로 초기화 
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
	
//	swap(ptr1, ptr2);
//	printf("*ptr1, *ptr2 : %d %d \n", *ptr1, *ptr2);
//	int i=0;
//	printf("호출 이전 i의 값 : %d \n",i);
//	change_val(&i);
//	printf("호출 이후 i의 값 : %d \n",i);

//    	int i,j;
//	i=3;
//	j=5;
//	printf("SWAP 이전 : i : %d , j : %d \n",i,j);
//	swap(&i,&j);
//	printf("SWAP 이후 : i : %d , j : %d \n",i,j);

  //  int arr[3];
  //  int i;

    //for(i=0; i<3; i++) {
//	scanf("%d" , &arr[i]);
  //  }

    //add_number(arr);
    //printf("배열의 각 원소 : %d , %d , %d \n",arr[0],arr[1],arr[2]);
    int arr[10];
    int i;

    for(i=0; i<10; i++) {
	scanf("%d",&arr[i]);	// 숫자 10개를 입력받는다. 입력받은 숫자는 각 인덱스에 맞게 배열에 초기화 된다. 
    }

    printf("입력한 배열 중 가장 큰 수 : %d \n", max_number(arr));
	return 0;

}

//int add_number(int *parr) {
//	int i;
//	for(i=0; i<3; i++) {
//	    parr[i]++;
//	}
//	return 0;
//}
/*
   	ptr1 , ptr2 포인터를 파리미터로 받아 

   */
//void swap(int* p1, int* p2)
//{
//	int* temp = p1; // temp 포인터를 pt1로 초기화 한다.
//	p1 = p2;	// p1를 p2로 초기화 한다.
//	p2 = temp;	// p2를 temp로 초기화 
//}

