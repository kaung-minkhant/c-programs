#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
	int c, state, wc;
	state = OUT;
	wc = 0;
	while ( (c=getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n' ) {
			state = OUT;
		}
		if (state == OUT) {
			state = IN;
			wc++;
		}
	}
	printf("Word count is %d.\n", wc);
}

