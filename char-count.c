#include <stdio.h>
int main() {
	long count;
	for (count=0; getchar() != EOF; count++)
		;
	printf("Character Count is %ld", count);
}
