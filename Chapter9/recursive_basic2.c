#include <stdio.h>

void recursive(int n) {
	printf("Recursive call \n");
	if(n==1)
	 return;
	recursive(n-1);
}

int main(void) {
	int a = 2;
	recursive(a);
	return 0;
}
