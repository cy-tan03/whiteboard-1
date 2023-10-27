#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)
void inputNum(int array[100], int* count);

void symmetricDifference() {
	int list1[100], list2[100], intersect[100];
													
	int count1 = 0;
	int count2 = 0;
	int intersectnum = 0,differenceNum=0;
	int difference[100];
	printf("List 1>\n");
	inputNum(list1, &count1);
	printf("List 2>\n");
	inputNum(list2, &count2);
	int unique=1;

	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < (count2); j++) {
			unique = 1;
			if (list1[i] == list2[j]) {
				unique = 0;
				break;
			}
		}
		if (unique) {
			difference[differenceNum] = list1[i];
			differenceNum++;
		}
	}
	unique = 1;
	for (int i = 0; i < count2; i++) {
		for (int j = 0; j < (count1); j++) {
			unique = 1;
			if (list2[i] == list1[j]) {
				unique = 0;
				break;
			}
		}
		if (unique) {
			difference[differenceNum] = list2[i];
			differenceNum++;
		}
	}


	printf("Symmetric difference : \n");
	for (int i = 0; i < differenceNum; i++) {
		printf("%d, ", difference[i]);
	}
	system("pause");
}

