#include <stdio.h>

int main() {
	int a = 0;
	int b = 1;
	int c = 0;
	int sum = 0;

	do {
		c = a + b;
		a = b;
		b = c;
		if (b % 2 == 0) {
			sum = sum + b;
		}
	} while (b <= 4000000);

	printf("%d", sum);
}