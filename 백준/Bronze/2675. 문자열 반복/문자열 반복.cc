#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int R;
		char arr[21];
		scanf("%d %s", &R, arr);
		int n = strlen(arr);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < R; j++) {
				printf("%c", arr[i]);
			}
		}
		printf("\n");
	}
	return 0;
}