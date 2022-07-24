#include<stdio.h> 

/*
	22.07.22 KEG
	1. 10진수를 입력받아 Binary로 출력한다. 
	2. 연산자를 입력받아 Bit 연산 진행.  
	


*/
int inputNum;
int mask;
int inputShiftNum;
char operator;
int shiftflag;
void shiftCalc(int _shftflag , int _num , int _shiftNum) {
	/*
	 *			00000000 00000000 00000000 00000010 
	 *			int j = 1    shifted _num 4 
	 *			00000000 00000000 00000000 00000100 
	 *			int j = 2    shifted _num 8 
	 *			00000000 00000000 00000000 00001000 
	 *			int j = 3    shifted _num 16 
	 *			00000000 00000000 00000000 00010000 
	 *			int j = 4    shifted _num 32 
	 *			00000000 00000000 00000000 00100000 
	 *			int j = 5    shifted _num 64 
	 *			00000000 00000000 00000000 01000000 
	 *			int j = 6    shifted _num 128 
	 *			00000000 00000000 00000000 10000000 
	 *			int j = 7    shifted _num 256 
	 *			00000000 00000000 00000001 00000000 
	 *			int j = 8    shifted _num 512 
	 *			00000000 00000000 00000010 00000000 
	 *			int j = 9    shifted _num 1024 
	 *			00000000 00000000 00000100 00000000 
	 *			int j = 10    shifted _num 2048 
	 *			00000000 00000000 00001000 00000000 
	 *		
	 *
	 *
	 *		00000000 00000000 00001000 00000000 
	 *		int k = 1    shift >> num 1024 
	 *		00000000 00000000 00000100 00000000 
	 *		int k = 2    shift >> num 512 
	 *		00000000 00000000 00000010 00000000 
	 *		int k = 3    shift >> num 256 
	 *		00000000 00000000 00000001 00000000 
	 *		int k = 4    shift >> num 128 
	 *		00000000 00000000 00000000 10000000 
	 *		int k = 5    shift >> num 64 
	 *		00000000 00000000 00000000 01000000 
	 *		int k = 6    shift >> num 32 
	 *		00000000 00000000 00000000 00100000 
	 *		int k = 7    shift >> num 16 
	 *		00000000 00000000 00000000 00010000 
	 *		int k = 8    shift >> num 8 
	 *		00000000 00000000 00000000 00001000 
	 *		int k = 9    shift >> num 4 
	 *		00000000 00000000 00000000 00000100 
	 *		int k = 10    shift >> num 2 
	 *		00000000 00000000 00000000 00000010 
	 *
	 */

	printf("입력받은 숫자 : %d \n ",_num);
	if(_shftflag == 1) {
			for (int j=_shiftNum; j<=10; j++) {
		printf("int j = %d",j);
		int a  = _num << j;
		printf("    shifted _num %d \n",a);
		
		for(int i=31; i>=0; i--) {
			mask  = 1 << i;
			printf("%d", a & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");
	} 
	}else {
		for(int k=_shiftNum; k<=10; k++) {
		printf("int k = %d",k);
		int b  = _num >> k;
		printf("    shift >> num %d \n",b);
		
		for(int i=31; i>=0; i--) {
			mask  = 1 << i;
			printf("%d", b & mask ? 1 : 0);

			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");

	}
	}

}

/*
 *			9e a2 76  EA 
 *			ver : 9e &0xC0;
 *			padding : 9e & 0x20;
 *			extension : 9e & 0x10;
 *       	cc : 9e&0xF;
 *
 *			
 *			9e
 *			1001 1110
 *
 *			
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */


int main() {
	printf("연산할 10진수를 입력하세요 : ");
	scanf("%d",&inputNum);
	printf("입력받은 번호는 %d 입니다.\n",inputNum);
	
//	printf("진행할 연산을 입력하세요 " : %s ) 
	printf("Shift Count를 입력하세요 : ");
	scanf("%d",&inputShiftNum);

	printf("shift 종류를 선택하세요. right shift : 1 / left shift 0  : ");
	scanf("%d",&shiftflag);
//inputNum = inputNum << 4;
//	while(1) {
		if(inputNum == 0) {
			return 0;
		}



		for(int i=31; i>=0; i--) {
			mask  = 1 << i;
//	printf("iCount : %d   bitMask : %d \n ", i,mask);
			printf("%d", inputNum & mask ? 1 : 0);
		
			   if(i%8 == 0)
 	                         printf(" ");

		}
		printf("\n");
	
		
	//	inputNum = inputNum >> inputShiftNum;
	//	printf("inputNum << 2 : %d  \n",inputNum);

		
	//	inputNum = inputNum&0x7e;
	
	//	inputNum = inputNum^0x81;

	//	inputNum = inputNum|0x81;
		shiftCalc(shiftflag , inputNum,inputShiftNum);
	//	printf("inputNum = %d \n " , inputNum);
	
			

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





