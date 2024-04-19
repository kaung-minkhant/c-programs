#include <stdio.h>

#define MAX_LENGTH 100
#define PRINT_TRIGGER 5
int getLine(char line[], int max_length);
void copy(char to[], char from[]);

int main() {
	int length; 
	char line[MAX_LENGTH + 1];
	length = 0;
	for ( int i = 0; i < MAX_LENGTH + 1; i++) {
		line[i] = 0;
	}
	while ( (length = getLine(line, MAX_LENGTH)) > 0) {
		if (length > PRINT_TRIGGER) {
			printf("%s\n", line);
		}
	}
	return 0;
}

int getLine(char line[], int max_length) {
	int c, i;
	for ( i = 0; (c = getchar()) != '\n' && c != EOF && i < max_length; i++) {
		line[i] = c;
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
