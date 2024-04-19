#include <stdio.h>

int main() {
	int lengths[15], count, c, state;
	for ( int i = 0; i < 15; i++) {
		lengths[i] = 0;
	}

	while ( (c = getchar()) != EOF) {
		if ( c == ' ' || c == '\t' || c == '\n') {
			lengths[count]++;
			count = 0;
		} else {
			count++;
		}
	}
	printf("Character Length Histogram\n");
	for ( int i = 0; i < 15; i++) {
		printf("%3d: ", i);
		for (int j = 0; j < lengths[i]; j++) {
			printf("-");
		}
		printf("\n");
	}
	return 0;
}
