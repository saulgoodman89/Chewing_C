#include<stdio.h>

int main() {
	/*
	 *	변수,함수,포인터 주소값 까지 모두 저장이 가능. 
	 *	값을 변경,참조,포인터 연산이 허용되지 안ㄶ는다. 
	 *	포인터 자체에 데이터 형이 없으므로 몇 바이트를 읽어 들어야 할지 알 수 없기 때문. 
	 *
	 *	주소값을 저장해두고 포인터 타입을 나중에 결정 할 때 쓰이며 메모리 동적 할당에 유용하게 쓰인다. 
	 *
	 */
	char c='a';
	int n=10;

	void *vp;
	vp=&c;
	vp=&n;
	

}
