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

/*
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
ㅑ
*/

/*
struct TEST {
	int c;
	int *pointer;
};
int main()  {
	struct TEST t;
	struct TEST *pt = &t;
	int i = 0;

	t.pointer = &i;
	*t.pointer = 3;

	printf("i : %d \n", i);

	*pt->pointer = 4;

	printf("i : %d \n",i);
	return 0;
}*/

/*
int add_one(int *a);
struct TEST {
	int c;
};

int main() {
	struct TEST t;
	struct TEST *pt = &t;

	pt->c = 0;
	add_one(&t.c);

	printf("t.c : %d \n",t.c);

	add_one(&pt->c);
	printf("t.c : %d \n" , t.c);
	return 0;
}

int add_one(int *a) {
	*a += 1;
	return 0;
}*/

/*
struct TEST {
	int i;
	char c;
};

int main() {
	struct TEST st , st2;
	st.i = 1;
	st.c = 'c';

	st2 = st;

	printf("st2.i : %d \n", st2.i);
	printf("st2.c : %c \n" , st2.c);

	return 0;

}*/

/* 구조체 대입
char copy_str(char *dest , char *src);
struct TEST {
	int i;
	char str[20];
};

int main() {

    struct TEST a, b;

    b.i = 3;
    copy_str(b.str, "hello , world");
    a=b;

    printf("a.str : %s \n", a.str);
    printf("a.i : %d \n", a.i);

    return 0;

}

char copy_str(char *dest , char *src) {

    while (*src) {

	*dest = *src;
	src++;
	dest++;

    }

    *dest = '\0';
    return 1;
}*/

struct TEST {
	int age;
	int gender;
};

int set_human(struct TEST *a, int age , int gender);
int main() {
	struct TEST human;
	set_human(&human , 10 , 1);
	printf("AGE : %d // Gender : %d", human.age , human.gender);
	return 0;

}

int set_human(struct TEST *a , int age , int gender) {
	a->age = age;
	a->gender = gender;
	return 0;
}
