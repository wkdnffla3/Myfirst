#include<stdio.h>
#include<stdlib.h>

int main() {
	int input;
	int x, y;
	int **map;
	scanf("%d",&input);

	map = (int **)malloc(sizeof(int*)*input);
	for (int i = 0; i < input; i++) map[i] = (int *)malloc(sizeof(int)*input);

	for (int i = 0; i < input; i++)
		for (int j = 0; j < input; j++)
			map[i][j] = rand() % 2;
	x = rand() % 10; y = rand() % 10;
	map[x][y] = 2;
	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++)
			printf("%d ",map[i][j]);
		printf("\n");
	}
	free(map[0]);
	free(map);
	return 0;
}