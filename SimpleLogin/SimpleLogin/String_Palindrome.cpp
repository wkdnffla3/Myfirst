#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

using namespace std;

void pal(char *p, int len) {
	int i = 0, j = len - 1;
	while (*(p + i) == *(p + j)) {
		i++;
		j--;
	}

	if (i >= j) {
		printf("string is palindrome\n\n");
	}
	else {
		printf("\nstring not palindrome\n\n");
	}
}

int main() {
	char *s, *str,str2[10];
	printf("\nEnter Stirng:");
	
	//gets_s(str,strlen(str));//gets_s(char *char, int size)
	cin.getline(str,strlen(str));
	
	s = str;
	pal(s, strlen(str));
	getch();
	return 0;
}