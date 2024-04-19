#include <stdio.h>
int main() {
	int c, whiteSpaces, space, tab, newLine;
	whiteSpaces = space = tab = newLine;
	while ((c=getchar()) != EOF) {
		if (c == ' ') space++;
		if (c == '\n') newLine++;
		if (c == '\t') tab ++;
		if (c == ' ' || c == '\n' || c == '\t') whiteSpaces++;
	}
	printf("whitespaces: %d, spaces: %d, tabs: %d, new lines: %d\n", whiteSpaces, space, tab, newLine);
}
