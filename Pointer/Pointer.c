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

    /*
        1차원 배열 가르키기 


    int arr[3] = {1,2,3};
    int *parr;

    parr = arr;     // parr = &arr[0]
    printf("arr[1] : %d",arr[1]);
    printf("parr[1] : %d \n" , parr[1]);


    arr[1] : 2
    parr[1] : 2
    return 0;
    

    int arr[10] = {100,98,97,95,89,76,92,96,100,99};

    int* parr = arr;
    int sum = 0;

    while(parr - arr <=9) {
        sum+=(*parr);
        parr++;
    }

    printf("내 시험 점수 평균 : %d \n",sum / 10);
    */

   /*
        포인터의 포인터 


    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a=3;

    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa); //&a : a의 주소값   , pa : pa의 주소값 , *ppa의 주소값 
    printf("&pa : %p // ppa : %p \n", &pa, ppa);

    a : 3 // *pa : 3 // **ppa : 3 
    &a : 0x7ffe8d8ed334 // pa : 0x7ffe8d8ed334 // *ppa : 0x7ffe8d8ed334 
    &pa : 0x7ffe8d8ed338 // ppa : 0x7ffe8d8ed338       왜 &a의 값과 다른지 이해가 안됨.  포인터 자체도 변수이므로 메모리상의 일부분을 차지한다. 
    

    int arr[3] = {1,2,3};
    int (*parr)[3] = &arr;

    printf("arr[1] : %d \n",arr[1]);
    printf("parr[1] : %d \n",(*parr)[1]);
    arr[1] : 2 
    parr[1] : 2
    */
   int aa = 10;
   int* a = &aa;
   int bb = 20;
   int* b = &bb;

   printf("a : %d   b :  %d",*a,*b);
   return 0;
}