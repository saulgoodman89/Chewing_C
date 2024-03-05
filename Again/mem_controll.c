#include<stdio.h>
#include<string.h>

int main() {
   int arr[10] = {1,2,3,4,5};
   int arr2[10] = {1,2,3,4,3};
    /*
        memcmp(const void *ptr1 , const void *ptr2 , size_t num)
        원하는 byte 만큼의 메모리 영역에 있는 문자를 처음부터 끝까지 비교하여 큰지 작은지 리턴해준다. 
        
    */

   if (memcmp(arr,arr2,5) == 0)
        printf("arr과 arr2는 일치! \n");
    else 
        printf("arr과 arr2는 일치 안함 \n");
        
    return 0;

   // char str[50] = "I Love Chewing C hahaha";
    //printf("str len : %ld \n",strlen(str));
    //printf("str 23 : %s \n",str+23);
    //printf("str 17 : %s \n",str+17);
    //printf("%s \n", str);
    //printf("memmove 이후 \n");
    ///*
        //memmove(void *dest , const void *src , size_t num)
        //*dest : 복사 한 걸 붙여넣을 메모리 포인터 
        //*src : 복사 할 메모리를 가리키는 포인터 
        //복사하 바이트 길이 

        //str+23 dest 메모리가 str 끝 
        //str+17 hahaha
    //*/
    //memmove(str +23 , str+17,6);
    //printf("%s \n",str);

}