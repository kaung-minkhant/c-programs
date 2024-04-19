#include <stdio.h>

int main() {
	long lineCount;
	int c;
	while ((c=getchar()) != EOF) {
		if (c == '\n') {
			lineCount++;
		}
	}
	printf("Line count is %ld\n", lineCount);
}
