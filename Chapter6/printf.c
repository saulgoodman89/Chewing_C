#include <stdio.h>

int main(void) {



	printf("/%12d/ /%12d/ /%12d/ \n",100,200,300);
	printf("/%+12d/ /%+12d/ /%+12d/ \n",100,200,300);
	printf("/%-12d/ /%-12d/ /%-12d/ \n",100,200,300);
	printf("/%+1d/ \n",100);
	printf("/%+2d/ \n",200);
	printf("/%+3d/ \n",300);
	printf("/%+4d/ \n",400);

	printf("%f \n", 0.1234);
	printf("%f \n",0.12345678);
	printf("%f \n",0.11111112);


	double d1=1.23e-3;
	double d2=1.23e-4;
	double d3=1.23e-5;
	double d4=1.23e-6;

	printf("%g \n",d1);
	printf("%g \n",d2);
	printf("%g \n",d3);
	printf("%g \n",d4);

	printf("Hello Everybody! \n");
	printf("I love puppy! \n");
	printf("Today is Friday \n");

	printf("앞집 강아지는 말했다. \"멍! 멍!\" 정말 귀엽다.");

	int age = 12;
	printf("10진수로 %d 살이고 16진수로 %x살 입니다.",age,age);
	return 0;

}
