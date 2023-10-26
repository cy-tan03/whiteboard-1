#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)

void FibonacciSequence() {
	int num;
	int output[100];
	do {
		printf("Enter the number of Fibonacci sequence elements to generate(1-99) : ");
		scanf("%d", &num);
		if (num < 1 || num>99) {
			printf("Invalid input, Enter Again\n\n");
		}
	} while (num < 1 || num>99);
	for (int i = 0; i < num; i++) {
		if (i <= 1) {
			output[i] = i;
		}
		else {
			output[i] = output[i - 1] + output[i - 2];
		}
	}
	for (int i = 0; i < num; i++) {
		printf("%d, ",output[i]);
	}
	
	system("pause");
}