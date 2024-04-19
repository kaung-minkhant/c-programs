#include <stdio.h>
#define MAX_LENGTH 100
int getLine(char line[], int max_length);
int main() {
	int length;
	char line[MAX_LENGTH+1];
	for (int i = 0; i < MAX_LENGTH+1; i++) {
		line[i] = 0;
	}
	length = 0;
	while ( (length = getLine(line, MAX_LENGTH)) > -1) {
		printf("Length >> %d\n", length);
		int start = 0;
		int end = length -1;
		printf("Original String: %s\n", line);
		while (start <= end) {
			char temp = line[start];
			line[start] = line[end];
			line[end] = temp;
			start++;
			end--;
		}
		printf("Reversed String: %s\n", line);	
	}
	return 0;
}

int getLine(char line[], int max_length) {
	int c,i;
	for (i=0; (c=getchar())!='\n' && c!=EOF && i < max_length; i++) {
		line[i] = c;
	}
	line[i] = '\0';
	if (c == EOF) {
		return -1;
	}
	return i;
}
