#include<stdio.h>

struct HUMAN {
	int age;
	int height;
	int weight;
	int gender;
};

typedef struct HUMAN Human;
int print_status(Human human);

int main() {
	struct HUMAN adam = {31,182,75,0};
	struct HUMAN eve = {27,166,48,1};

	print_status(adam);
	print_status(eve);

}

int print_status(Human human) {
	if(human.gender ==0) {
		printf("MALE \n");
	}else {
		printf("FEMALE \n");
	}

	printf("AGE : %d / Height : %d / Weight : %d \n",human.age,human.height,human.weight);

	if( human.gender == 0 && human.height >= 180) {
		printf("HE IS A WINNER!! \n");
	}else if(human.gender == 0 && human.height < 180) {
		printf("HE IS A LOOSER \n");
	}
	printf("-----------------------------------------------------------------------\n");

	return 0;
}
