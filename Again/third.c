#include<stdio.h>

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
}
