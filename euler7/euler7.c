#include <stdio.h>

int main() {
	int i, a, cnt = 1;
	
	for (i = 2; ; i++) {
		for (a = 2; a <= i - 1; a++) {
			if (i % a == 0)
				break;
		}
		if (i == a) {
			cnt++;
		}
		if (cnt == 10002)
			break;
	}
	printf("%d", i);
}