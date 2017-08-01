#include <stdio.h>

int pow1() {
	int i, n = 0;
	for (i = 1; i <= 100; i++) {
		n = n + (i*i);
	}
	return n;
}

int pow2() {
	int i, n = 0;
	for (i = 1; i <= 100; i++) {
		n = n + i;
	}
	n = n * n;
	return n;
}

int main() {
	long long int result;
	result = pow2() - pow1();
	printf("%lld\n", result);
}