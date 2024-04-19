#include <stdio.h>
#define MAX_LENGTH 100

int getLine(char line[], int max_length);
int main() {
	int c, length;
	char line[MAX_LENGTH+1];
	length = 0;
	for (int i=0; i < MAX_LENGTH+1; i++) {
		line[i] = 0;
	}
	while ( (length = getLine(line, MAX_LENGTH)) > -1) {
		for ( int i = 1; line[length-i] == ' ' || line[length-i] == '\t'; i++) {
			line[length-i] = '\0';
		}
		if (length > 0) {
			printf("%s\n", line);
		}
	}
	return 0;
}

int getLine(char line[], int max_length) {
	int c, i;
	for ( i = 0; ( c = getchar() ) != '\n' && c != EOF && i < max_length; i++) {
		line[i] = c;
	}
	line[i] = '\0';
	if (c == EOF) {
		return -1;
	}
	return i;
}
