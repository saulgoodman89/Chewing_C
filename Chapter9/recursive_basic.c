#include <stdio.h>

void recursive(void) {
	printf("Recursive call ! \n");
	recursive();
}

int main(void) {
	recursive();
	return 0;
}
