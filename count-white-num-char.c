#include <stdio.h>

int main() {
	int c, charCount, whiteCount;
	int nArray[10];
	charCount = whiteCount = 0;
	for ( int i = 0; i < 10; i++) {
		nArray[i] = 0;
	}

	while ( (c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') whiteCount++;
		else if ( c >= '0' && c <= '9') nArray[c-'0']++;
		else charCount++;
	}
	printf("Numbers Count: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", nArray[i]);
	}
	printf(", Char Count: %d, White Space Count: %d.\n", charCount, whiteCount);
}
