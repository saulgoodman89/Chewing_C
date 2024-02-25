#include<stdio.h>
#include<stdlib.h>

//int add_one(int *a) {
//	*a += 1;
//	return 0;
//}
//struct Books {
	//char name[30];
	//char auth[30];
	//char publ[30];
	//int borrowed;
//};
//
//int str_length(char *str) {
	//int i = 0;
	//while (str[i]) {
		//i++;
	//}
	//return i;
//}
//


//int copy_str(char *dest , char *src) {
	//while (*src) {
		//*dest = *src;
		//src++;
		//dest++;
	//}
	//*dest='\0';
	//return 1;
//}

//char copy_str(char *dest , const char *src) {
	//while (*src) {
		//*dest = *src;
		//src++;
		//dest++;
	//}
	//*dest = '\0';
	//return 1;
//}
//
//struct test {
	//int a,b;
//};

//struct TEST {
	//int c;
//};
//

//struct TEST {
	//int c;
//};

struct TEST {
	int i;
	char c;
};

int main(int argc , char **argv) {
	int i,j,input,sum = 0;
	int subject , students;
	int **arr;

	printf("과목 수 : %d ");
	scanf("%d",&subject);

	printf("학생의 수 : ");
	scanf("%d", &students);

	arr=(int**)malloc(sizeof(int *)*subject);

	for(i=0; i<subject; i++) {
		arr[i] = (int*)malloc(sizeof(int) * students);
	}	

	for(i=0; i<subject; i++) {
		printf("과목 %d 점수 --------------- ");

		for(j=0; j<students; j++) {
			printf("학생 %d 점수 입력 : ",j);
			scanf("%d", &input);
			arr[i][j] = input;
		}
	}

	for(i=0; i<subject; i++) {
		sum = 0;
		for(j=0; j<students; j++) {
			sum+= arr[i][j];
		}
		printf("과목 %d 평균점수 : %d \n",i,sum/students);
	}

	for(i=0; i<subject; i++) {
		free(arr[i]);
	}

	free(arr);

	
//	int i;
	//int x,y;
	//int **arr;

	//printf("arr[x][y]를 만든다 \n");
	//scanf("%d %d",&x,&y);

	//arr = (int **)malloc(sizeof(int *) *x);
	//for (i = 0; i < x; i++) {
		//arr[i] = (int *)malloc(sizeof(int) * y);
	//}
	//printf("생성 완료! \n");

	//for (i = 0; i < x; i++) {
		//free(arr[i]);
	//}
	//free(arr);
////	int student;
	//int i , input;
	//int *score;
	//int sum = 0;

	//printf("학생의 수는 : ");
	//scanf("%d",&student);

	//score = (int*)malloc(student * sizeof(int));

	//int memLength = sizeof(score);

	//printf("memLength : %d \n\n",memLength);

	//for(i=0; i<student; i++) {
		//printf("학생 %d의 점수 : ",i);
		//scanf("%d",&input);
		//score[i] = input;
	//}

	//for(i=0; i<student; i++) {
		//sum += score[i];
	//}

	//printf("전체 학생 평균 점수 : %d \n",sum / student);
	//free(score);
////	heap 
		//사용자가 자유롭게 할당하거나 해제 할 수 있다. 
		//할당과 해제가 자유로운 만큼 제대로 사용해야 한다. 
	//int SizeOfArray;
	//int *arr;
	//int *value;
	//printf("만들고 싶은 배열의 원소의 수 : ");
	//scanf("%d", &SizeOfArray);

	//arr = (int*)malloc(sizeof(int) * SizeOfArray);


	//arr[29] = 1001;
	//value = arr[29];
	//printf("value : %d",value);
	//free(arr);
////	struct TEST st , st2;

	//st.i = 1;
	//st.c = 'c';

	//st2 = st;

	//printf("st2.i : %d \n",st2.i);
	//printf("st2.c : %c \n",st2.c);
////    struct TEST t;
  //  struct TEST *pt = &t;
    
    //pt->c = 0;
    //add_one(&t.c);
    //printf("t.c : %d \n", t.c);

//    add_one(&pt->c);
  //  printf("t.c : %d \n",t.c);

//
    //t.pointer=&i;
    //*t.pointer = 3;
    //printf("i : %d \n",i);
//
    //*pt->pointer = 4;
    //printf("i : %d \n",i);
    //struct TEST t;
    //struct TEST *pt = &t;
    //// pt가 가리키는 구조체 변수 C 멤버의 값을 0으로 set 한다.
    //(*pt).c = 0;
    //printf("t.c : %d \n",t.c);
//
    //// pt가 가리키는 구조체 변수의 C 멤버값을 1로 한다.
    //pt->c = 1;
    //printf("t.c : %d \n",t.c);
//
	//struct test st;
	//struct test *ptr;
//
	//ptr = &st;
	//ptr->a = 1;
	//ptr->b = 2;
	//printf("st의 a 멤버 : %d \n", st.a);
	//printf("st의 b 멤버 : %d \n", st.b);
//
	//
	//ptr = &st;
//
	//(*ptr).a = 1;
	//(*ptr).b = 2;
//
	//printf("st의 a 멤버 : %d \n", st.a);
	//printf("st의 b 멤버 : %d \n", st.b);
    //struct Books hp;
//
    //copy_str(hp.name,"Harry Potter");
    //copy_str(hp.auth,"J.K. Rolling");
    //copy_str(hp.publ,"Scholastic");
    //hp.borrowed = 0;
//
    //printf("책 이름 : %s \n",hp.name);
    //printf("저자 이름 : %s \n",hp.auth);
    //printf("출판사 이름 : %s \n",hp.publ);
//
    //Psi.age = 99;
    //Psi.height = 185;
    //Psi.weight = 80;
//
    //printf("Psi에 대한 정보 \n");
    //printf("나이 : %d \n",Psi.age);
    //printf("키 : %d \n",Psi.height);
    //printf("몸무게 :%d \n",Psi.weight);
	//char str1[] = "hello";
	//char str2[] = "hi";
//
	//printf("복사 이전 : %s \n",str1);
	//copy_str(str1,str2);
	//printf("복사 이후 :%s \n", str1);
//
    /*
		literal : 소스 코드 상에서 고정된 값을 가지는 것.
		C언어에서 ""로 묶인 것들을 문자열 리터럴로 부른다. 

		*pstr = "goodbye" 을 실행하게 되면 컴퓨터는 goodbye의 시작 주소 값을 가져와 pstr에 대입한다. 
		리터럴은 오직 읽기만 가능한 곳. 이곳을 함부러 변경하려 하면 프로그램이 종료된다.

	   */
   // char str[] = "sentence";
    // sentence 라는 문자열이 저장된 주소값.
   // char *pstr = "sentence";
	
    //printf("str : %s \n", str);
   // printf("pstr : %s \n", pstr);
//printf("%d \n", "sentence");	
    /*
    char str1[10], str2[10];

    printf("문자열을 입력하세요 : ");
    scanf("%s",str1);
    printf("입력한 문자열 : %s \n",str1);
    
    printf("문자열을 입력하세요 : ");
    scanf("%s",str2);
    printf("입력한 문자열 : %s \n",str2);
    */
    /*
       	stdio.h 에 정의된 FILE 포인터 타입의 글로벌 변수. 
	이를 통해 표준 입력 스트림에 접근.
	stdin은 버퍼링 입력을 사용한다.
	사용자가 엔터키를 누를 때 까지 입력은 버퍼에 저장되며 언테키가 눌리면 입력이 프로그램에 전달. 
       */
/*
    char str[30];
    int i;

    scanf("%d \n",&i);
    scanf("%s \n", str);

    printf("str : %s\n",str);
  return 0;*/
 //   char str[] = {"What is your name?"};

   // printf("이 문자열의 길이 : %d \n", str_length(str));
    //char sentence_1[4] = {'P','s','i','\0'};
    //char sentence_2[4] = {'P','s','i',0};
    //char sentence_3[4] = {'P','s','i',(char)NULL};
    //char sentence_4[4] = {"Psi"};
//
    //printf("sentence_1 : %s \n",sentence_1);
    //printf("sentence_2 : %s \n",sentence_2);
    //printf("sentence_3 : %s \n",sentence_3);
    //printf("sentence_4 : %s \n",sentence_4);
	////char null_1 = '\0';
	//char null_2 = 0;
	//char null_3 = (char)NULL;
//
	//char not_null = '0';
//
	//printf("NULL의 정수(아스키 값 : %d , %d , %d \n",null_1,null_2,null_3);
	//printf("'0'의 정수(아스키) 값 : %d \n" , not_null);
//
	return 0;
}
/*
int main() {
	int arr[5]; //크기가 5인 arr배열 초기화
	int i, ave = 0;	// i , ave 변수 초기화.

	for(i=0; i<5; i++) { // i가 5보다 적을 때 까지 (0 ~ 4) 까지 학생 5명의 성적을 입력 받는다. 
		printf("%d 번째 학생의 성적은 ? ",i+1);
		scanf("%d", &arr[i]);
	}

	for(i=0; i<5; i++) { // 5명 학생의 성적을 더한다. 
		ave = ave + arr[i];
	}		

	printf("전체 학생의 평균은 :%d \n", ave / 5);
	return 0;

}*/

/*
int main() {
	int guess = 5;
	int prime[1000]; // 크기 1000짜리 배열 초기화 

	int index = 1;
	int i;
	int ok;
	prime[0] = 2;
	prime[1] = 3;

	for(;;) {
		ok=0;
		for(int i=0; i<=index; i++){
			if(guess % prime[i] != 0) {
				ok++;
			}else {
				break;
			}
		}
		if( ok == (index + 1)) {
			index++;
			prime[index] = guess;
			printf("소수 : %d \n", prime[index]);
			if(index == 999) break;
		}
		guess += 2;
	}
	return 0;
}*/

/*
int main() {
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	printf("arr 배열의 2행 3열의 수를 출력 : %d \n",arr[1][2]);
	printf("arr 배열의 1행 2열의 수를 출력 : %d \n",arr[0][1]);
}*/
//
//int main() {
	//int score[3][2];
	//int i,j;
//
	///*
	   	//3명의 학생의 국어 / 수학 점수를 입력 받는다. 
	//*/
	//for(i=0; i<3; i++) {	// 학생에 대한 for문 
		//for(j=0; j<2; j++) { // 점수를 받기위한 for문  
			//if(j==0) {	//j=0 일 때 국어점수 
				//printf("%d 번째 학생의 국어 점수 : ",i+1);
				//scanf("%d",&score[i][j]);
			//}else if (j == 1) {	//j=1 일 때 수학점수 
				//printf("%d 번째 학생의 수학 점수 : ",i+1);
				//scanf("%d",&score[i][j]);
			//}
	//}		
//}
//
	//for(i=0; i<3; i++) {
		//printf("%d 번째 학생의 국어 점수 : %d   , 수학 점수 : %d \n",i+1,score[i][0],score[i][1]); 
	//}
	//return 0;
//}

/*
void changeValue(int *value) {
	*value = 5;
}

int main() {
	int i = 100;
	int *p = &i;
	int **q = &p;

	*p = 200;  // i를 가리키고 있으므로 i 값이 바뀐다. 
	printf("i=%d , *q = %d , **q = %d \n",i,*p,**q);

	**q = 300; // q->pi->i를 가리키고 있으므로 i 값이 바뀐다. 
	printf("i = %d , *p = %d , **q = %d \n",i,*p,**q);

	return 0;
}*/

