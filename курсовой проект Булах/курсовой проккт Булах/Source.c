#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define _USE_MATH_DEFINES
void tabl(int a[6][11]);
void menu(char n);
void main()
{
	setlocale(LC_ALL, "RUS");
	int a[5][11] = {
	{ 1, 75, 89, 105, 77, 25, 90, 47, 73 , 575, 2},
	{ 2, 68, 93, 101, 74, 29, 96, 50, 77, 588, 3},
	{ 3, 71, 89, 103, 75, 22, 91, 50, 73, 574, 1},
	{ 4, 80, 90, 122, 84, 41, 99, 52, 86, 654, 5},
	{ 5, 88, 96, 121, 76, 32, 102, 56, 81, 652, 4} };

	while (1)
	{
		int n;
		printf("Выберите пункт из списка:\n");
		printf("1)Вывести результаты этапов\n2) Вывести место\n3) Вывести итоги\n4) Общая таблица\n");
		scanf_s("%d", &n);
		getchar();
		switch (n)
		{

		case 1:
			puts("\t\t\t\tЛыжная эстафетa");
			puts("\t\t\tЭтапы:");
			puts(" Команды   1      2     3       4      5      6      7      8 ");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		case 2:
			puts("\t\t\t\tЛыжная эстафетa");
			puts(" Команды   Место");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				for (int j = 10; j < 11; j++)
				{
					printf("%7d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;

		case 3:
			puts("\t\t\t\tЛыжная эстафета");
			puts(" Команды  Итог");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 1; j++)
				{
					printf("%5d ", a[i][j]);
				}
				for (int j = 9; j < 10; j++)
				{
					printf("%7d ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		case 4:
			puts("\t\t\t\tЛыжная эстафетa");
			puts("\t\t\tЭтапы:");
			puts(" Команды   1      2     3       4      5      6      7      8    Итог   Место");
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 11; j++)
				{
					printf("%5d  ", a[i][j]);
				}
				printf("\n\n");
			}
			break;
		default:
			printf("Пункт меню не выбран\n");
			break;

		}
	}



}