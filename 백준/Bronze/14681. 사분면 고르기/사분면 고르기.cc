#include <stdio.h>

int main() {
	int input_x,input_y;
	scanf("%d\n%d", &input_x, &input_y);
	if (input_x > 0 && input_y > 0) {
		printf("1");
	}
	else if (input_x < 0 && input_y > 0) {
		printf("2");
	}
	else if (input_x < 0 && input_y < 0) {
		printf("3");
	}
	else {
		printf("4");
	}
	return 0;
}