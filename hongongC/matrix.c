#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **matrix = (int **)malloc(4 * sizeof(int *));
	int num = 1;
	
	for (int i = 0; i < 4; i++)
	{
		matrix[i] = (int *)malloc(5 * sizeof(int));
	
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix[i][j] = num ++;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%3d", matrix[i][j]);
		}
		printf("\n");
	}

	//메모리 해제
	for (int i =0; i < 4; i++)
	{
		free(matrix[i]);
	}
	free(matrix);



	return 0;
       	
}
