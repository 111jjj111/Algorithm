#include <stdio.h>

int main() {
	int a, b;
	int t;		
	scanf("%d", &t);
	while (t != 0) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		t--;
	}
	return 0;	
	
}		