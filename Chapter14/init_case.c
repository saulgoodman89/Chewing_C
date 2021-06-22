#include<stdio.h>

int main(void) {
	
		int i,j;

		int somang1[3][3] = {
			{1,2,3} , {4,5,6} , {7,8,9}
		};

		int somang2[3][3] = {
			{1},
			{4,6},
			{7,8,9}
		};

		int somang3[3][3]={1,2,3,4,5,6,7};

		printf("case 1 출력 \n");

		for(int i=0; i<3; i++) 
			for(j=0; j<3; j++) 
				printf("%d" , somang1[i][j]);
		printf("\n\n");

		
		printf("case 2 출력 \n");

		for(int i=0; i<3; i++) 
			for(j=0; j<3; j++) 
				printf("%d" , somang2[i][j]);
		printf("\n\n");

		printf("case 3 출력 \n");
		for(int i=0; i<3; i++) 
			for(j=0; j<3; j++) 
				printf("%d" , somang3[i][j]);
		printf("\n\n");

		return 0;

}
