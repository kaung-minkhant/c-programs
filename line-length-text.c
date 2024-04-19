#include <stdio.h>

#define MAX_LENGTH 5
int getLine(char line[], int max_length);
void copy(char to[], char from[]);

int main() {
	int max, length; 
	char line[MAX_LENGTH + 2], longest[MAX_LENGTH + 2];
	max = length = 0;
	for ( int i = 0; i < MAX_LENGTH + 1; i++) {
		line[i] = 0;
		longest[i] = 0;
	}
	while ( (length = getLine(line, MAX_LENGTH)) > 0) {
		printf("length >> %d\n", length);
		if (length > max) {
			max = length;
			copy(longest, line);
		}
	}
	printf("The true length of the longest line is %d.\n", max);
	printf("Longest line (truncated to max length) is %s\n", longest);
	return 0;
}

int getLine(char line[], int max_length) {
	int c, i;
	for ( i = 0; (c = getchar()) != '\n' && c != EOF; i++) {
		if ( i < max_length) {
			line[i] = c;
		}
	}
	line[i] = '\0';
	return i;
}

void copy(char to[], char from[]) {
	int i;
	for ( i = 0; from[i] != '\0'; i++ ) {
		to[i] = from[i];
	}
	to[i] = '\0';
}
