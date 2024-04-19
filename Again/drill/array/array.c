#include<stdio.h>

/*
   	성적을 높은 순으로 정렬하는 프로그램
   */
int main() {
	int total = 5;
	int arr[total];
	int i, ave = 0;
	int value , compValue  = 0;
	int rank = 1;
	for (i = 0; i < total; i++) {
	printf("%d 번째 학생의 성적은 ? ", i + 1);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < total; i++) {
		ave = ave + arr[i];
	}
		ave = ave / total;
	printf(" 전체 학생의 평균은 : %d \n", ave);
	for (i = 0; i < total; i++) {
	

	}
		return 0;

}
