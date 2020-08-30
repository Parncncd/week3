#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned long long a, b, palindrome = 0;
	unsigned long long  m = 0, d = 0;
	for (int j = 900; j < 1000; j++) {
		for (int k = 900; k < 1000; k++) {
			a = k * j;
			b = a;
			m = 0;
			while (a > 0) {
				d = a % 10;
				a = a / 10;
				m = m * 10 + d;
			}
			if (b == m) {
				palindrome = b;
			}
		}
	}
	printf("%llu", palindrome);

	return 0;
}
