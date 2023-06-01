#include<stdio.h>

int main(int argc , char **argv) {
    int i;
    printf("받은 인자의 개수 : %d \n", agrc);

    for(i=0; i<argc; i++) {
	printf("이 프로그램으로 받은 인자 : %s \n" argv[i]);
    }

    return 0;
}
