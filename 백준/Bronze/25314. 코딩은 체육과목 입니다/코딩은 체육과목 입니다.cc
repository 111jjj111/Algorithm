#include <stdio.h>

int main() {
	int input;
	scanf("%d", &input);
	int num = input / 4;
	while (num != 0) {
		printf("long ");
		num--;
	}
	printf("int");
	return 0;
}		