#include <stdio.h>

int main(void)
{
	int stock[25][200];
	double sight[50][2];
	char word[15000][46];

	int a[][4] = {1, 1, 1, 2, 2, 2, 2, 3, 3, 3};

	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
