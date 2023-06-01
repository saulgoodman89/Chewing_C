#include<stdio.h>
int read_char(void *p , int byte);
int main() {
    int arr[1] = {0x12345678};
    printf("%x \n", arr[0]);
    read_char(arr, 4);
    /*
    void a;의 경우 메모리 사이즈 체크가 안되서 에러 발생   
    void* a;
    void *a의 경우 포인터기 때문에 메모리 상에 8Byte 만큼 지정. 어떠한 형태의 포인터의 값도 담을 수 잇다. 
    */
    return 0;
}

// 순수 주소값만 받기 위해 void 형 포인터 사용. 
int read_char(void *p , int byte) {

    do {
	printf("%x \n", *(char *)p);
	byte--;
	p = (char *)p + 1;
    }while (p && byte);
    return 0;
}

