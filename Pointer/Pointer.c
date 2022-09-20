#include<stdio.h>

int main() {
    /*
        포인터 : 특정 데이터의 주소값을 가지는 변수 
        * : 변수에 저장된 주소값에 해당하는 데이터로 생각 
        & : 변수의 주소값을 나타낸다. 
    */
    
    /*
    int *p;
    int a;

    p = &a;

    printf("포인터 p에 들어있는 값 : %p \n",p);
    printf("int 변수 a가 저장된 주소 : %p \n",&a);

    포인터 p에 들어있는 값 : 0x7ffeda3aca3c 
    int 변수 a가 저장된 주소 : 0x7ffeda3aca3c 
    */

    /*
    int *p;
    int a;

    p = &a;
    a = 2;

    a의 값 : 2 
    *p의 값 : 2

    printf("a의 값 : %d \n",a);
    printf("*p의 값 : %d \n",*p);
    */

   /*
   int *p;
   int a;

   p = &a;
   *p = 3;

   printf("a의 값 : %d \n",a);
   printf("*p의 값 : %d \n",*p);

   a의 값 : 3 
   *p의 값 : 3 
    */

   /*
   int a;
   int b;
   int *p;

   p = &a;
   *p = 2;
   p = &b;
   *p = 4;

   printf("a : %d \n",a);
   printf("b : %d \n",b);

   a : 2 
   b : 4
   */

    /*
        const에 포인터를 사용 할 수 있을까 ? 
    */

   /*
   int a;
   int b;
   const int* pa = &a;  // int형 변수를 가리키는데 , 절대 그 값을 바구지마라 
   //*pa = 3;     // expression must be modifiable lvalue
   pa = &b;
   */


/*
int a;
int* pa;
pa = &a;

printf("pa의 값 : %p \n",pa);
printf("(pa+1)의 값 : %p  \n",pa + 1);

pa의 값 : 0x7fffdb5da28c 
(pa+1)의 값 : 0x7fffdb5da290 
*/
    return 0;
}