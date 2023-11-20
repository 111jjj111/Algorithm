#include <stdio.h>

int main() {
	int i = 1;
	int input;
	scanf("%d", &input);
	for (i; i <= 9; i++) {
		printf("%d * %d = %d\n", input,i,input*i);
	}
}