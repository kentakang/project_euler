#include <stdio.h>

int result;

int checkPalindrome(n) {
	int reversedInt = 0, originalInt = n, remainder;

	while (n != 0) {
		remainder = n % 10;
		reversedInt = reversedInt * 10 + remainder;
		n /= 10;
	}

	if (originalInt == reversedInt) {
		return 1;
	}
	else {
		return 0;
	}
}

int main(void)
{
	int n = 0;
	int answer = 0;

	for (int x = 100; x < 1000; x++) {
		for (int y = 999; y > 99; y--) {
			n = x * y;
			if (checkPalindrome(n) == 1) {
				if (n > answer) {
					answer = n;
				}
			}
		}
	}

	printf("%d\n", answer);
}