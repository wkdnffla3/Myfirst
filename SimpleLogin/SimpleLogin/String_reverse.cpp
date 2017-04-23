#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void rev(char str[60]) {
	int len = 0, i = 0, j;
	char temp[60];
	len = strlen(str);
	i = 0;
	j = len - 1;

	while (j >= 0) {
		temp[i] = str[j];
		i++;
		j--;
	}
	
	temp[i] = '\0';
	printf("\n Reversed String is %s\n\n",temp);
}

void reverse(char str[60]) {
	int len = 0, i = 0, j;
	char c;
	len = strlen(str);
	i = 0;
	j = len - 1;

	while (i < j) {
		c = str[i];      //c는 temp역할을 한다.
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
	printf("\nReversed String is:%s\n\n",str);

}

int main() {
	char str[60];
	int i, j, ch;
	system("cls");
	printf("\n\n Enter Sentence that to be reversed:");
	gets_s(str);
	do {
		printf("\n Press\n1.Reversing by storing it another array\n2.reversing by swapping of character in same char array\n3. EXIT");
		printf("\nEnter choice:");
		scanf_s("%d", &ch);
		switch (ch) {
		case 1:
			rev(str);
			break;
		case 2:
			reverse(str);
			break;
		}



	} while (ch < 3);
	getch();
	return 0;
}