#include <stdio.h>

int main() {
	long long a = 600851475143;
	int i = 3;
	int result = 0;

	while (1) {
		while (!(a % i)) {
			a /= i;
			result = i;
		}
		if (a == 1) break;

		i += 2;
	}

	printf("%d\n", result);
}