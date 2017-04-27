#include<stdio.h>
#include<stdlib.h>

typedef struct position {
	int i, j;
}pos;

void save_range(int range,pos set,pos save[]);

int main() {
	pos set;
	set.i = 25;
	set.j = 25;
	//int i, j;
	int range = 3;

	pos *save = (pos*)malloc(sizeof(pos)*range*4);

	save_range(range, set, save);
	for(int i=0;i<range*4;i++)
	printf("%d %d\n",save[i].i,save[i].j);

	free(save);
	return 0;
}

void save_range(int range, pos set, pos save[]) {
	int i, j;
	int save_index = 0;
	for (i = -3, j = 0; j < 3; i++, j++)//상단 우측방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = 0, j = 3; i < 3; i++, j--)//하단 우측 방향
	//	printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = 3, j = 0; i > 0; i--, j--)//하단 좌측 방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = 0, j = -3; j < 0; i--, j++)//상단 좌측 방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}
	//printf("end1\n");
}