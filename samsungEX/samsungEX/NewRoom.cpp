#include<stdio.h>
#include<stdlib.h>
//���Է� Ȯ�ο�
void room_print(int **room, int input_room_size) {
	for (int i = 0; i < input_room_size; i++) {
		for (int j = 0; j < input_room_size; j++)
			printf("%d ", room[i][j]);
		printf("\n");
	}
}

int main() {
	int input_room_size;
	int **room;
	
	//�� ũ�� �Է�
	scanf("%d",&input_room_size);
	
	//�� ũ�� ����
	room = (int**)malloc(sizeof(int*)*input_room_size);
	for (int i = 0; i < input_room_size; i++) {
		room[i] = (int*)malloc(sizeof(int)*input_room_size);
	}
	
	//�氪 �Է�
	for (int i = 0; i < input_room_size; i++)
		for (int j = 0; j < input_room_size; j++)
			scanf("%d",&room[i][j]);
	
	//���Է� Ȯ�ο�
	room_print(room, input_room_size);

		
	//��ũ�� ������ �����Ҵ� ����
	free(room[0]);
	free(room);
	return 0;
}