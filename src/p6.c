#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#pragma warning (disable:4996)

void findMaxOccurrence() {
	int maxOccurrence=0,count=0;
	char maxCharacter;
	char str[50] = "Hello, World!!";

	for (int i = 0; i < strlen(str); i++) {
		count = 0;
		if (str[i] != ' ' && str[i] != ',' && str[i] != '?' && str[i] != '!' && str[i] != '.') {
			for (int j = 0; j < strlen(str); j++) {
				if (str[i] == str[j]) {
					count++;
				}
			}
			if (count > maxOccurrence) {
				maxCharacter = str[i];
				maxOccurrence = count;
			}
		 }
	}
	printf("Character : %c\nOccurrence : %d\n", maxCharacter, maxOccurrence);
	system("pause");
}