#include <stdio.h>
#define n 2000000

int main() {
	static int array[n + 1];
	int i, a, b = 0;
	long long int sum = 0;

	for (i = 1; n >= i; i++) array[i] = 1;

	for (a = 2; a <= 1000; a++) {
		for(b = a * 2; b<=n; b+=a) array[b] = 0;
	}
	for (i = 1; i <= n; i++) {
		if (array[i] == 1) {
			printf("%d ", i);
			sum = sum + i;
		}
	}

	printf("รัวี : %lld\n", sum);
}