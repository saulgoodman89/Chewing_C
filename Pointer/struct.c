#include<stdio.h>

/*
struct Human {
	int age;
	int height;
	int weight;
};

int main() {

	struct Human Psi;
	Psi.age = 99;
	Psi.height = 185;
	Psi.weight = 80;

	printf("Psi 에 대한 정보 \n");
	printf(" 나이 : %d \n", Psi.age);
	printf(" 키: %d \n", Psi.height);
	printf(" 몸무게 : %d \n", Psi.weight);


}*/
/*
struct test {
	int a,b;
};


int main() {

	struct test st; //struct test 형을 가리키는 포인터
	struct test *ptr; // ptr은 구조체가 아니다!

	ptr = &st;
	(*ptr).a = 1;
	(*ptr).b = 2;

	printf("st의 a 멤버 : %d \n", st.a);
	printf("st의 b 멤버 : %d \n",st.b);
	return 0;
}*/

/*
int main() {

	struct test st;
	struct test *ptr;
	//st->a=10;
	//printf("Normal struct : %d \n",st.a);
	ptr = &st;
	ptr->a = 1;
	ptr->b = 2;
	
	
	printf("st의 a 멤버 : %d \n", st.a);
	printf("st의 b 멤버 : %d \n",st.b);


}*/

struct TEST {
	int c;
};

int main() {
	struct TEST t;
	struct TEST *pt = &t;
	(*pt).c = 0;

	printf("t.c : %d \n", t.c);
	pt->c = 1;
	printf("t.c : %d \n",t.c);
	return 0;


}
