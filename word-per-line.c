#include <stdio.h>

#define IN 1
#define OUT 0
#define YES 1
#define NO 0
int main() {
	int c, state, newLinePrinted;
	state = OUT;
	newLinePrinted = NO;
	while ( (c=getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
		}
		if ( state == IN ) {
			newLinePrinted = NO;
			putchar(c);
		}
		if (newLinePrinted == NO && state == OUT) {
			putchar('\n');
			newLinePrinted = YES;
		}
	}
}
