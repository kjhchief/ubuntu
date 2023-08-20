#include <stdio.h>

int main(void)
{
	int *max = (int *)malloc(sizeof(int));

	if (max == NULL)
	{
		printf("메모리가 부족합니다.");

		return 1;
	}

	*max = 999;
	free(max);

	return 0;
}
