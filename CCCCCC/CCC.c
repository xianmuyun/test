#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include <time.h>
#include "game.h"


void menu()
{
	printf("*************************************\n");
	printf("******* 1.paly          0.exit*******\n");
	printf("*************************************\n");
	
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };

	InitBoard(board, ROW, COL);

	DisplayBoard(board, ROW, COL);

	while (1)
	{

		PlaysMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	


}




void test()
{

	int choose = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &choose);
		switch (choose)
		{

		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}



	} while (choose);


}

int main()
{
	test();
	return 0;
}
