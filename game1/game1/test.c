#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("********  1.��ʼ��Ϸ ***********\n");
	printf("********  0.�˳���Ϸ ***********\n");
	printf("********************************\n");
}

void game()
{
	//�׵���Ϣ����
	//1�����ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2���Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindBoard(mine,show, ROW, COL);
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����,������ѡ��!\n");
			
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}