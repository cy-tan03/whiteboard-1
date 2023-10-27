#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)
int findSqrt(int num);

void main() {
	int num = 36;
	int sqrt;
	sqrt = findSqrt(num);
	printf("Square Root of %d is %d\n", num, sqrt);
	system("pause");
}

int findSqrt(int num) {
	for (int i = 0; i <= num / 2; i++) {
		if (num == (i * i)) {
			return i;
		}

	}
}