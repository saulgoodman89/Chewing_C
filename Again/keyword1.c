#include<stdio.h>
typedef int cal_type;

int main() {
    cal_type input;
    cal_type a,b;

    while(1) {
        printf("--- 계산기 ---");
        printf("1. 덧셈 \n");
        printf("2. 뺄셈 \n");
        printf("3. 종료 \n");

        scanf("%d",&input);

        if(input == 1) {
            printf(" 두 수 : ");
            printf("%d%d",&a,&b);
            printf("%d와 %d의 합 : %d \n",a,b,a+b);
        }else if(input == 2) {
            printf("두수 : ");
            scanf("%d%d",&a,&b);
            printf("%d와 %d의 차 : %d \n",a,b,a-b);
        }else 
            break;
    }
    return 0;
}