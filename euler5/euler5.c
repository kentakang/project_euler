#include <stdio.h>

int result;

int checkDivision(n) {
	int i, a = 0;

	for (i = 1; i <= 20; i++) {
		if (n % i == 0) {
			a++;
		}
	}

	if (a == 20)
		return 1;
	else
		return 0;
}

int main() {
	int n = 1, i = 0;
	while (i <= 1) {
		if (checkDivision(n) == 1) {
			i++;
		}
		else {
			n++;
		}
	}
	printf("%d\n", n);
}