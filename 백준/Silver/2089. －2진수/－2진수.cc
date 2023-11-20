#include <stdio.h>

void decimalToNegativeBinary(int n) {
    if (n == 0) {
        printf("0\n");
        return;
    }

    char result[32];  // 최대 32비트까지 처리할 수 있도록 배열을 선언
    int index = 0;

    while (n != 0) {
        int remainder = n % -2;
        n /= -2;

        if (remainder < 0) {
            remainder += 2;
            n++;
        }

        result[index++] = remainder + '0';
    }

    // 결과를 역순으로 출력
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    decimalToNegativeBinary(n);

    return 0;
}
