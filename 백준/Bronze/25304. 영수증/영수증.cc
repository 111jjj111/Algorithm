#include <stdio.h>

int main() {
	int sum_value, n, a, b;
	int sum = 0;
	scanf("%d\n%d", &sum_value, &n);
	while (n != 0) {
		scanf("%d %d", &a, &b);
		sum += a * b;
		n--;
	}
	if (sum == sum_value) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;
	
}		