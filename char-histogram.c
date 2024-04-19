#include <stdio.h>

#define NumChar 26
int main() {
	int c;
	char charArray[NumChar];
	for ( int i = 0; i < NumChar; i++) {
		charArray[i] = 0;
	}

	while ( (c=getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') {
			charArray[c-'a']++;
		}
	}
	printf("Character (lowercase) histogram: \n");
	for (int i = 0; i < NumChar; i++) {
		printf("%c: ", i+'a');
		for (;charArray[i] > 0; charArray[i]--) {
			putchar('-');
		}
		printf("\n");
	}
	return 0;
}
