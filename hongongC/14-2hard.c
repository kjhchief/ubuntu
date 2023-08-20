#include <stdio.h>

int main(void)
{
	int ary[5][6] = 
	{
		{1, 2, 3, 4, 5, 0},
		{6, 7, 8, 9, 10, 0},
		{11, 12, 13, 14, 15, 0},
		{16, 17, 18, 19, 20, 0},
		{0, 0, 0, 0, 0, 0}
	};

	printf("초기 배열값 : \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%4d", ary[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			ary[i][5] += ary[i][j];
			ary[4][j] += ary[i][j];
			ary[4][5] += ary[i][j];
		}
	}

	printf("최종 배열값 : \n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%4d", ary[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;

}
