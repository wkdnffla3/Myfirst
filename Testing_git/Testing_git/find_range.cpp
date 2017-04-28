#include<stdio.h>
#include<stdlib.h>

//map size is starting 0

typedef struct position {
	int i, j;
}pos;

void save_range(int range,pos set,pos save[],int *index);

void effective(pos attack[],int attack_index );

int attack(pos point, int consume);



int main() {
	pos set;
	set.i = 25;set.j = 25;
	//int i, j;
	int range = 3;
	int can_attack_index = 0;
	int move_index = 0;
	pos *can_move = (pos*)malloc(sizeof(pos) * 4);//can moving all coordinate
	pos *save_attack = (pos*)malloc(sizeof(pos)*range*4*5);

	save_range(1, set, can_move, &move_index);
	save_range(range, set, save_attack, &can_attack_index);//can attack range when basic coordinate position

	for (int i = 0; i < move_index; i++)
		save_range(range, can_move[i], save_attack, &can_attack_index);

	//so we fide all attack coordinate position 



	//for(int i=0;i<can_attack_index;i++)
	//printf("%d %d\n",save_attack[i].i,save_attack[i].j);

	//printf("%d", can_attack_index);

	//for (int i = 0; i<move_index; i++)
		//printf("%d %d\n", can_move[i].i, can_move[i].j);

	free(can_move);
	free(save_attack);
	return 0;
}

void save_range(int range, pos set, pos save[],int *index) {
	int i, j;
	int save_index = *index;
	for (i = range*-1, j = 0; j < range; i++, j++)//하단 우측방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = 0, j = range; i < range; i++, j--)//하단 좌측 방향
	//	printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = range, j = 0; i > 0; i--, j--)//상단 좌측 방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}

	for (i = 0, j = range*-1 ; j < 0; i--, j++)//상단 우측 방향
		//printf("%d %d\n", set.i + i, set.j + j);
	{
		save[save_index].i = set.i + i;
		save[save_index].j = set.j + j;
		save_index++;
	}
	*index = save_index;
	//printf("end1\n");
}

void effective(pos attack[], int attack_index) {
	pos high;
	high = attack[0];

}

int attack(pos point, int consume) {
	if (point.i - 2 > -1) {

	}
}