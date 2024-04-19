#include <stdio.h>
#define YES 1
#define NO 0

int main() {
	int c, replaced;
	replaced = NO;
	while ((c=getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			if (replaced == YES) ;
			else {
				replaced = YES;
				putchar(c);
			}
		} else {
			putchar(c);
			replaced = NO;
		}
	}
}

