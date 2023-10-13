#include <stdio.h>

int main(void)
{
	for (int j = 2; j <= 9; j++)
	{
		for (int i = 1; i <= 9; i++)
			{
			printf("%d * %d = %d\n",j, i, j*i);
		}
		printf("\n");
	}

	return 0;
}
