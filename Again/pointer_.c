#include<stdio.h>

int main() {
    int n = 10;
    int *np;
    int **npp;
    int ***nppp;

    np = &n;
    npp=&np;
    nppp = &npp;
    
    printf("n : %d  *np :  %d  **npp : %d  ***nppp : %d \n",n,*np,**npp,***nppp);
    printf("n : %ld  *np :  %ld  **npp : %ld  ***nppp : %ld \n",sizeof(int),sizeof(int*),sizeof(int**),sizeof(int***));
    printf("n : %ld  *np :  %ld  **npp : %ld  ***nppp : %ld \n",sizeof(n),sizeof(np),sizeof(npp),sizeof(nppp));
}