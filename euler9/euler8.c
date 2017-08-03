#include <stdio.h>

int main() {
	int n = 0, a, b, c;
	
	for (a = 1; a < 1000; a++) {
		n = a * a;
		for (b = a + 1; b < 1000; b += 2) {
			if (2 * a + b >= 1000)
				break;
			if (a + 2 * b >= 1000)
				break;

			c = (1000 - a - b);
			if (n + b * b == c * c) {
				printf("%d\n", a * b * c);
			}
		}
	}
}