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
  
	int arr[10];
	int i, ave = 0;
	for (i = 0; i < 10; i++) {
		printf("%d 번째 학생의 성적은? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++) {
		ave = ave + arr[i];
	}
	
	ave = ave / 10;
	printf("전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < 10; i++) {
		printf("학생 %d : ", i + 1);
	if (arr[i] >= ave)
	    printf("합격 \n");
	else
	    printf("불합격 \n");
	}
    return 0;

}
