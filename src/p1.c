#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)

void sorting() {
	int input[99];
	int output[99];
	int count = 0;
	char con=' ';

	
	do {
		if (count == 0) {
			printf("Enter a Number : ");
			scanf("%d", &input[count]);
			rewind(stdin);
			count++;
		}
		else {
			printf("Continue ?(Y=Yes N=No)");
			con = toupper(getchar());
			rewind(stdin);
			printf("\n");
		}
		rewind(stdin);
		switch (con) {
		case 'Y':
			printf("Enter a Number : ");
			scanf("%d", &input[count]);
			rewind(stdin);
			count++;
			break;
		case 'N':
			break;
		default:
			break;
		}
	} while (con!='N');
	int temp;
	
	for (int i = 0; i < count; i++) {
	
		for (int j = i+1; j < count; j++) {
			if (input[i] >input[j]) {
				temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
	for (int i = 0; i < count; i++) {
		printf("%d\n", input[i]);
	}
	
}