#include <stdio.h>

int main() {
	int dice_1, dice_2, dice_3;
	int sum;
	scanf("%d %d %d", &dice_1, &dice_2, &dice_3);

	if (dice_1 == dice_2 && dice_2 == dice_3) {
		sum = 10000 + dice_1 * 1000;
		printf("%d", sum);
	}
	else if (dice_1 == dice_2 && dice_2 != dice_3 || dice_2 == dice_3 && dice_1 != dice_3 || dice_3 == dice_1 && dice_2 != dice_3) {
		if (dice_1 == dice_2) {
			sum = 1000 + dice_1 * 100;
			printf("%d", sum);
		}
		else if (dice_2 == dice_3) {
			sum = 1000 + dice_2 * 100;
			printf("%d", sum);
		}
		else if (dice_1 == dice_3) {
			sum = 1000 + dice_1 * 100;
			printf("%d", sum);
		}
	}
	else if (dice_1 != dice_2 && dice_2 != dice_3) {
		if (dice_1 > dice_2 && dice_1 > dice_3) {
			sum = 100 * dice_1;
			printf("%d", sum);
		}
		else if (dice_2 > dice_1 && dice_2 > dice_3) {
			sum = 100 * dice_2;
			printf("%d", sum);
		}
		else if (dice_3 > dice_2 && dice_3 > dice_1) {
			sum = 100 * dice_3;
			printf("%d", sum);
		}
	}
}