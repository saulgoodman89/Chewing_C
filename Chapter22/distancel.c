#include<stdio.h>
#include<math.h>

/*
struct point {
    int x;
    int y;
};*/

struct perInfo {
    char addr[30];
    char tel[20];
};

struct person {
    char name[20];
    char pID[20];
    struct perInfo* info;
};

struct simple {
    int data1;
    int data2;
};


int main() {
    /*
    double distance;
    
    struct point p1 , p2;

    
    fputs("첫 번째 점의 x,y 좌표 입력 : ", stdout);
    scanf("%d %d", &p1.x, &p1.y);

    fputs("두 번째 점의 x,y 좌표 입력 : ", stdout);
    scanf("%d %d",&p2.x , &p2.y);

    */

    /*
    r구조체 초기화는 배열의 문법을 적용 가능함. 

    struct point p1 = {10,20};
    struct point p2 = {20,10};
    distance =  sqrt((p1.x-p2.x) * (p1.x-p2.x) + (p1.y - p2.y) * (p1.y-p2.y));
    printf("두 점의 거리는 %f 입니다.",distance);
    */


   /*
   struct person pArray[3];
   int i;

   for(int i=0; i<3; i++) {
    printf("이름 , 전화번호 순으로 입력 : " );
    scanf("%s %s", pArray[i].name , pArray[i].phone);

   }

   printf("\n 입력 결과는 다음과 같습니다. \n");
   for(int i=0; i<3; i++) {
    printf("이름 : %s",pArray[i].name);
    printf("전화번호 : %s\n" , pArray[i].phone);
   }
   */

    /*
        구조체 변수와 포인터 구조체에서 포인터가 사용되는 경우 
        1. 구조체 포인터를 선언하여 구조체 변수를 가리키는 경우 
        2. 구조체 멤버로 포인터 변수가 선언되는 경우. 

    1. 구조체 변수와 포인터 구조체에서 포인터가 사용되는 경우 
   struct person man= {"Thomas","354-00xx"};
   struct person* pMan;
   pMan = &man;


   printf("name   : %s\n",man.name);
   printf("phone  :  %s\n",man.phone);

   printf("name     : %s\n",(*pMan).name);  // 포인터 변수 선언 시 ()를 사용한 이유는 . 연산자가 * 보다 연산 우선순위가 높기 때문 
   printf("phone    :  %s\n", (*pMan).phone);

   2. 구조체의 멤버로 포인터 변수가 선언되는 경우 ㄴ
    struct perInfo info = {"Korea Seoul","333-4444"};
    struct person man = {"Mr. Lee","820204-xxxx512"};
    man.info=&info;

    printf("name : %s \n",man.name);
    printf("pID : %s \n", man.pID);
    printf("addr : %s\n", man.info->addr);
    printf("tel : %s \n", man.info->tel);
    */

    // 구조체 변수의 주소 값과 구조체 변수의 첫 번째 멤버의 주소값은 같다. 
    struct simple s = {1,2};
    printf("address1 : %d \n",&s);
    printf("address2 : %d \n",&(s.data1));
    
    //address1 : 2116393360 
    //address2 : 2116393360 

    return 0;
}


