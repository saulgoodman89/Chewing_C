#include<stdio.h>

int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("Array 3번째 원소 : %d \n",arr[2]);
	
//	int arr[10] = {2,10,30,21,34,23,53,21,9,1};
//	int i=0;
//	    for(i=0; i<10; i++){
//	    	printf("배열의 %d 번째 원소 : %d \n",i+1,arr[i]);
//	    }

//    int arr[5];
  //  int i, ave = 0;

    //for (i = 0; i < 5; i++) // 학생들의 성적을 입력받는 부분
//	{
//		printf("%d 번째 학생의 성적은? ", i + 1);
//		scanf("%d", &arr[i]);
//	}
  //  for (i = 0; i < 5; i++) // 전체 학생 성적의 합을 구하는 부분
//	{
//		ave = ave + arr[i];
//	}
	// 평균이므로 5 로 나누어 준다.
//	printf("전체 학생의 평균은 : %d \n", ave / 5);
  
//	int arr[10];	// arr 배열 초기화
	//int i, ave = 0; // i , ave 초기화 
	
	///*
		//학생 10명의 성적을 입력 받는다. 
	//*/
	//for (i = 0; i < 10; i++) {
		//printf("%d 번째 학생의 성적은? ", i + 1);
		//scanf("%d", &arr[i]);
	//}

	///*
		//학생들 성적의 총합을 더한다. 
	//*/
	//for (i = 0; i < 10; i++) {
		//ave = ave + arr[i];
	//}
	
	///*
		//총합을 10으로 나눠 avg를 구한다. 
	//*/
	//ave = ave / 10; // 
	//printf("전체 학생의 평균은 : %d \n", ave);

	///*
		//학생수만큼  for문 동작
		//i에 해당하는 학생의 점수가 ave 보다 크거나 같으면 합격 / 아니면 불합격 표시 
	//*/
	//for (i = 0; i < 10; i++) {
		//printf("학생 %d : ", i + 1);
	//if (arr[i] >= ave)
	    //printf("합격 \n");
	//else
	    //printf("불합격 \n");
	//}

	//소수 찾는 프로그램
	//int guess = 5;
	//int prime[1000];

	//int index = 1;
	//int i;
	//int ok;
	//prime[0] = 2;
	//prime[1] = 3;

	//for(;;) {
		//ok = 0; // ok를 0으로 초기화
		//for(i=0; i<=index; i++) {	// 0<=1 5 / 2  ok++ , 1<=1 5 / 3 ok++
			//if(guess % prime[i] != 0) {
				//ok++;
			//}else {  // guess % prime[i]가 소수가 아니다. 
				//break;	
			//}
		//}

	///*
			//0<=1 
			//ok++

			//1<=1
			//ok++

			//index 2
			//prime[2] = 5
			//5+2

			//0<=2
			//ok++
			//1<=2
			//ok++
			//2<=22
			//ok++
			//index = 3;
			//prime[3] = 7

	//*/

		//if(ok == (index + 1)) {	// 1 -- 1+1 false로 guess = 7   ,   2 = 3+1 guess 9
			//index++;
			//prime[index] = guess;
			////printf("소수 : %d   index : %d   ok : %d \n", prime[index],index,ok);
			//if(index == 999) break;
		//}
		//guess += 2;
	//}
	//printf("arr[0] = %d , arr[1]= %d , arr[2] = %d , arr[3] = %d", prime[0] , prime[1] , prime[2] , prime[3]);

	//int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	//printf("arr 배열의 2행 3열의 수 : %d \n",arr[1][2]);
	//printf("arr 배열의 1 행 2열의 수를 출력 : %d \n",arr[0][1]);
	
	int score[3][2];
	int i,j;

	/*
		n번째 학생의 국어 / 수학 점수를 입력 받는다.
		첫 번째 학생의 국어 (score[1][1])  국어
		첫 번째 학생의 수학 (score[1][2])  수학 
	*/
	for(i=0; i<3; i++)	// 학생 수 3 
	{
		for(j=0; j<2; j++) { // 과목 수 2   
			if(j==0) {
				printf("%d 번째 학생의 국어 점수 : ",i+1);
				scanf("%d", &score[i][j]);
			} else if( j == 1) {
				printf("%d 번째 학생의 수학 점수 : ",i+1);
				scanf("%d", &score[i][j]);
			}
		}
	}

	for(i=0; i<3; i++) {
		printf("%d 번째 학생의 국어 점수 : %d , 수학 점수 : % \n",i+1,score[i][0],[score[i][1]]);
	}
    return 0;

}
