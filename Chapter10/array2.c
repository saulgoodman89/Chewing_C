#include<stdio.h>

int main(void) {
	double total;
	double val[5] = {1.01,2.02,3.03,4.04,5.05};

	total=val[0]+val[1]+val[2]+val[3]+val[4];
	printf("평균 : %1f \n",total/5);
}
