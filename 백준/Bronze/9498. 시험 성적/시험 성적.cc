#include <stdio.h>

int main() {
	int grade;
	scanf("%d", &grade);
    if (89 < grade && grade <= 100) {
        printf("A");
    }
    else if (79 < grade && grade >= 70) {
        printf("B");
    }
    else if (69 < grade && grade >= 60) {
        printf("C");
    }
    else if (59 < grade && grade >= 50) {
        printf("D");
    }
    else {
        printf("F");
    }

	return 0;
}