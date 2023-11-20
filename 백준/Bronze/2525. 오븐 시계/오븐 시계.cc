#include <stdio.h>

int main() {
	int h, m;
	int time;
	scanf("%d %d\n%d", &h, &m,&time);
	int dif;
	int i = 0;
	if (m + time < 60) {
		m += time;
		printf("%d %d", h, m);
	}
	else if (m + time >= 60) {
		m += time;
		dif = m / 60;
		m -= dif * 60;
		if (h + dif < 24) {
			h += dif;
		}
		else if (h + dif >= 24) {
			h += dif;
			h -= 24;
		}
		printf("%d %d", h, m);
	}
	return 0;
}