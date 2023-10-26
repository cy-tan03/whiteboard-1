#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#pragma warning (disable:4996)
void inputNum(int array[100],int *count);

void intersect() {
	int list1[100], list2[100],intersect[100];
	int count1=0;
	int count2 = 0;
	int intersectnum = 0;
	printf("List 1>\n");
	inputNum(list1,&count1);
	printf("List 2>\n");
	inputNum(list2, &count2);
	
	for (int i = 0; i < count1; i++) {
		for (int j = 0; j < (count2); j++) {
			if (list1[i] == list2[j]) {
				intersect[intersectnum] = list1[i];
				intersectnum++;
			}
		}
	}
	printf("Intersection : \n");
	for (int i = 0; i < intersectnum; i++) {
		printf("%d, ", intersect[i]);
	}
	system("pause");
}

void inputNum(int array[100],int *count) {
	char con = ' ';
	
	do {
		if (*count == 0) {
			printf("Enter a Number : ");
			scanf("%d", &array[*count]);
			rewind(stdin);
			(*count)++;
		}
		else {
			printf("Continue ?(Y=Yes N=No)");
			con = toupper(getchar());
			rewind(stdin);
			
		}
		rewind(stdin);
		switch (con) {
		case 'Y':
			printf("Enter a Number : ");
			scanf("%d", &array[*count]);
			rewind(stdin);
			(*count)++;
			break;
		case 'N':
			break;
		default:
			break;
		}
	} while (con != 'N');
	printf("\n");
}