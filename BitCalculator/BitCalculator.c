#include<stdio.h> 

/*
	22.07.22 KEG
	1. 10진수를 입력받아 Binary로 출력한다. 
	2. 연산자를 입력받아 Bit 연산 진행.  
	


*/
int inputNum;
int mask;
int main() {
	printf("연산할 10진수를 입력하세요 : ");
	scanf("%d",&inputNum);
	printf("입력받은 번호는 %d 입니다.\n",inputNum);

//inputNum = inputNum << 4;
//	while(1) {
		if(inputNum == 0) {
			return 0;
		}



		for(int i=31; i>=0; i--) {
			mask  = 1 << i;
			printf("%d", inputNum & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");
	
		
		inputNum = inputNum << 2;
		printf("inputNum << 2 : %d  \n",inputNum);

	//	inputNum = inputNum&0x7e;
	
	//	inputNum = inputNum^0x81;

	//	inputNum = inputNum|0x81;
		printf("inputNum = %d \n " , inputNum);
	
			
	
		for(int i=31; i>=0; i--) {
			mask  = 1 << i;
			printf("%d", inputNum & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
	
		printf("\n");


//	}

}

int workCalculator() {
		for(int i=31; i>0; i--) {
			mask  = 1 << i;
			printf("%d", inputNum & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");
		return 0;
}


void shiftCalc() {
	for(int i=31; i>0; i--) {
			mask  = 1 << i;
			printf("%d", inputNum & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");
}
