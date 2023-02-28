#include<stdio.h>
/*
int change_val(int i) {
	i = 3;
	return 0;
}

int main() {
	int i = 0;
	printf("호출 이전 i의 값 : %d \n" , i);
	change_val(i);
	printf("호출 후 i의 값 : %d \n" , i);

	return 0;
}

	호출 이전 i의 값 : 0 
	호출 후 i의 값 : 0 


 */

/*
int change_val(int *pi) {
	printf("pi의 값 : %p \n" , pi);
	printf("pi가 가리키는 것의 값 : %d \n", *pi);

	*pi = 3;
	return 0;
}

int main() {
	int i=0;
	printf("i 변수 주소 값 : %p \n", &i);
	printf("호출 이전 i의 값 : %d \n", i);
	change_val(&i);
	printf("호출 이후 i의 값 : %d \n" , i);
}
	i 변수 주소 값 : 0x7ffd62b3b344 
	호출 이전 i의 값 : 0 
	pi의 값 : 0x7ffd62b3b344 
	pi가 가리키는 것의 값 : 0 
	호출 이후 i의 값 : 3
 */

/*
int swap(int a , int b) {
	int temp = a;
	a = b;
	b = temp;
	
	return 0;
}

int main() {
	int i,j;
	i=3;
	j=5;
	
	printf("SWAP 이전 i : %d, j : %d \n",i,j);
	swap(i,j);
	printf("SWAP 이후 i : %d , j : %d \n",i,j);
	return 0;
}
*/

/*
int swap(int *a , int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;

	return 0;
}

int main(){
	int i,j;
	i=3;
	j=5;

	printf("SWAP 이전 i : %d  j : %d \n",i,j);
	swap(&i , &j);
	printf("SWAP 이후 i : %d  j : %d \n", i,j);
	return 0;

}
*/

/*
int add_number(int *parr);
int main() {
	int arr[3];
	int i;

	for(i=0; i<3; i++) {
		scanf("%d", &arr[i]);
	}

	add_number(arr);

	printf("배열의 각 원소 : %d, %d , %d \n" , arr[0] , arr[1] , arr[2]);
}

int add_number(int *parr) {
	int i;
	for(i=0; i<3; i++) {
		parr[i]++;
	}
	return 0;
}

4
5
3
배열의 각 원소 : 5, 6 , 4 
*/
