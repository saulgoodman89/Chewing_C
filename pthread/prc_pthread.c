#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
/*
    pthread.h를 추가했음에도 "undefined reference to ~" 에러가 발생하면 -lpthread 옵션을 추가한다.  
    gcc prc_pthread.c -o pthread -lpthread 
*/
static pthread_t pthread;

void *doingJob() {
    printf("called doingJob");
    int i = 0;
    while(1) {
        i++;
        printf("i는  %d 입니다.",i);


        if(i>100) {
            pthread_join(pthread,0);
        }
    }
}

int main() {
   long pthreadCreate = pthread_create(&pthread,NULL,doingJob,NULL);
   if(pthreadCreate != 0) {
        printf("Failed make pthread");
   }else {
        printf("Successfully make pthrad \n");
   }
  //  pthread_join(pthread,0);
}

