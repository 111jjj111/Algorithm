#include <stdio.h>
#include <string.h>
int main() {
	char arr[101];
	scanf("%s", arr);
	int alpa[26];
	for (int i = 0; i < 26; i++) {
		alpa[i] = -1;
	}
	int size = strlen(arr);

	for (int i = 0; i < size; i++) {
		if (alpa[arr[i] - 'a'] == -1) {
			alpa[arr[i] - 'a'] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpa[i]);
	}

	return 0;
}