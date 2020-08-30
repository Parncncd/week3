#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main3() {
	int a = 1, i, sum;
	printf("1 ");
	while (a <= 10000) {
		i = 1, sum = 0;
		while (i < a) {

			if (a % i == 0) {
				sum += i;
			}

			i++;
		}
		if (a == sum) {
			printf("%d ", a);
		}
		a++;
	}
	return 0;

}
