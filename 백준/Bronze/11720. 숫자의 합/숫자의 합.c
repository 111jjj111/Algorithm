#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	char* pArr;
	int sum = 0;
	scanf("%d", &n);
	pArr = (char*)malloc(sizeof(char) * n + 1);
	scanf("%s", pArr);
	for (int i = 0; i < n; i++) {
		sum += pArr[i] - '0';
	}
	printf("%d", sum);
	free(pArr);
	return 0;
}