#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)

void FizzBuzz() {
	int input[100];
	
	for (int i = 0; i <= 99; i++) {
		input[i] = i + 1;
	}
	for (int i = 0; i <=99; i++) {
		if (input[i] % 3 == 0 && input[i] % 5 == 0) {
			printf("FizzBuzz ");
		}
		else if (input[i] % 3 == 0) {
			printf("Fizz ");
		}
		else if(input[i]%5==0){
			printf("Buzz ");
		}
		else {
			printf("%d ", input[i]);
		}
	}

	system("pause");
}