#include<stdio.h>
//
//int str_length(char *str) {
	//int i = 0;
	//while (str[i]) {
		//i++;
	//}
	//return i;
//}
//

int copy_str(char *dest , char *src) {
	while (*src) {
		*dest = *src;
		src++;
		dest++;
	}
	*dest='\0';
	return 1;
}
int main() {
	char str1[] = "hello";
	char str2[] = "hi";

	printf("복사 이전 : %s \n",str1);
	copy_str(str1,str2);
	printf("복사 이후 :%s \n", str1);

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

