#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	unsigned long long n, sum = 0, sum2 = 0,sum3=0;
	scanf("%llu", &n);
	printf("%llu ", n);
	if (n > 9) {
		printf(" -> ");
	}
	if (n > 9) {
		while (n > 0) {
			sum += n % 10;
			n = n / 10;
		}
		printf("%llu ", sum);
		if (sum > 9) {
			printf(" -> ");
			while (sum > 0) {
				sum2 += sum % 10;
				sum = sum / 10;
			}
			printf("%llu", sum2);
		}
		if (sum2 > 9) {
			printf(" -> ");
			while (sum2 > 0) {
				sum3 += sum2 % 10;
				sum2 = sum2 / 10;
			}
			printf("%llu", sum3);
		}
		return 0;
	}
}