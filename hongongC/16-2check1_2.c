#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *matrix = (int *)malloc(5 * 4 * sizeof(int));
	int num = 1;
	

	for (int i = 0; i < 20; i++)
	{
		matrix[i] = num ++;
	}

	for (int i = 0; i < 20; i++)
	{
		if ((i % 5 == 0) && (i != 0)) printf("\n");
		printf("%3d", matrix[i]);
	}

	//메모리 해제
	free(matrix);



	return 0;

	
	
       	
}
