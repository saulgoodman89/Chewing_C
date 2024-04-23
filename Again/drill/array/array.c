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

	/*
	arr[i] , 
	arr[i] > arr[j+j]
	arr[i] > arr[i+j]*/
	for (i = 0; i < total; i++) {
		for(int j=0; j<total; j++) {
			if(arr[i] > arr[j]) {
				rank++;
			}
		}
		/*
			1 번째 학생의 성적은 ? 99
			2 번째 학생의 성적은 ? 40
			3 번째 학생의 성적은 ? 28
			4 번째 학생의 성적은 ? 75
			5 번째 학생의 성적은 ? 55
		*/
		// 99 75 55 40 28  5 2 1 4 3 
		//printf("arr[%d] : %d /  rank : %d \n",i,arr[i],rank);			
		printf("rank : %d \n",rank);
		arr[rank] = arr[i];
		rank = 1;
	}


	for(i=0; i<total; i++) {
		printf("Sort arr[%d]  :  %d \n", i, arr[i]);
	}
		return 0;

}
