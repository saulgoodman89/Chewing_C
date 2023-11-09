#include <stdio.h>

#define MKTAG(a,b,c,d) ((a) | ((b) << 8) | ((c) << 16) | ((unsigned)(d) << 24))
#define FFERRTAG(a,b,c,d) (-(int)MKTAG(a,b,c,d))
#define KEG_ERROR FFERRTAG('0xF8','K','E','G')
#define KEG_HAPPY FFERRTAG('K','E','G','K')

int main() {
	
	printf("Check KEG_ERROR : %c \n",KEG_ERROR);
	printf("Check KEG_HAPPY : %d \n",KEG_HAPPY);
	
	return 0;
}
