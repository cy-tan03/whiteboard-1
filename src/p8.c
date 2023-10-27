#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#pragma warning (disable:4996)
int checkAnagram(char str1[],char str2[]);

void main() {
	char str1[] = "Conversation";
	char str2[] = "Voices, rant on";
	int anagram = checkAnagram(str1, str2);
	printf("Anagram? : %s\n", (anagram) ? "True" : "False");

	system("pause");
}

int checkAnagram(char str1[],char str2[]) {
	int lenStr1 = strlen(str1);
	int lenStr2 = strlen(str2);
	int anagram = 1;

	for (int i = 0; i < strlen(str1); i++) {
		str1[i] = toupper(str1[i]);
		if (str1[i] == ' ' || str1[i] == ',' || str1[i] == '.') {
			lenStr1--;
		}
	}
	for (int i = 0; i < strlen(str2); i++) {
		str2[i] = toupper(str2[i]);
		if (str2[i] == ' ' || str2[i] == ',' || str2[i] == '.') {
			lenStr2--;
		}
	}

	if (lenStr1==lenStr2) {
		
		for (int i = 0; i < strlen(str1); i++) {
			
			if (str1[i] != ' ' && str1[i] != ',' && str1[i] != '.') {
				int numOfChar1 = 0;
				int numOfChar2 = 0;
				for (int z = 0; z < strlen(str1); z++) {
					if (str1[i] == str1[z])
						numOfChar1++;
					
				}
				
				for (int j = 0; j < strlen(str2); j++) {
					if (str1[i] == str2[j]) {
						numOfChar2++;
					}
				}
				
				if (numOfChar1 != numOfChar2) {
					anagram = 0;
					break;
				}
			}
		}
		
	}
	else{
		anagram = 0;
	}
	return anagram;
}