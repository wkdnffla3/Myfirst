#include<stdio.h>
#include<stdlib.h>
//방입력 확인용
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
	
	//방 크기 입력
	scanf("%d",&input_room_size);
	
	//방 크기 생성
	room = (int**)malloc(sizeof(int*)*input_room_size);
	for (int i = 0; i < input_room_size; i++) {
		room[i] = (int*)malloc(sizeof(int)*input_room_size);
	}
	
	//방값 입력
	for (int i = 0; i < input_room_size; i++)
		for (int j = 0; j < input_room_size; j++)
			scanf("%d",&room[i][j]);
	
	//방입력 확인용
	room_print(room, input_room_size);

		
	//방크기 생성한 동적할당 해제
	free(room[0]);
	free(room);
	return 0;
}