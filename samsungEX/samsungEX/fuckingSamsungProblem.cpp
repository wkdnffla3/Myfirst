#include<stdio.h>
#include<stdlib.h>

typedef struct matrix {
	int move_x, move_y;
}move1;
typedef struct matrix {
	int pre_move_x, pre_move_y;
	int move_x, move_y;
}move2;
typedef struct matrix {
	int pre_move_x, pre_move_y;
	int pre_move1_x, pre_move2_y;
	int move_x, move_y;
}move3;
int main() {
	int **matrix;
	int input_size_N;

	move1 current_pos;
	scanf("%d",&input_size_N);
	
	matrix = (int **)malloc(sizeof(int*)*input_size_N);
	for (int i = 0; i < input_size_N; i++)
		matrix[i] = (int*)malloc(sizeof(int)*input_size_N);

	for (int i = 0; i < input_size_N; i++)
		for (int j = 0; j < input_size_N; i++)
			scanf("%d",&matrix[i][j]);

	for (int i = 0; i < input_size_N; i++) for (int j = 0; j < input_size_N; i++) if (matrix[i][j] == 2) { current_pos.move_x = j; current_pos.move_y = i; break; }

	for(int i=0)



	free(matrix[0]);
	free(matrix);

	return 0;
}