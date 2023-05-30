#include<stdio.h>

int main() {

    /*
       포인터란 ? 메모리 상에 위치한 데이터의 주소 값을 보관하는 변수. 
       & : 주소 값을 가져온다
       * : 주소값에 대응되는 데이터를 가져온다. 
       */

    int *p;
    int a;
    p = &a;
    a = 2;

    printf("a의 값 : %d \n",a);
    printf("*p의 값 : %d \n",*p);

    return 0;

}
