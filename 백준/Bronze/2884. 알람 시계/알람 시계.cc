#include <stdio.h>

int main() {
	int h, m;
	int time = 45;
	scanf("%d %d", &h, &m);
	if (m - time >= 0) {
		m = m - time;
		printf("%d %d", h, m);
	}
	else if (m - time < 0) {
		time -= m;
		m = 60;
		m -= time;
		if (h == 0) {
			h = 23;
		}
		else {
			h -= 1;
		}
		printf("%d %d", h, m);
	}
	return 0;
}