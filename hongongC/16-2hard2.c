#include <stdio.h>
#include <stdlib.h>

void prime_che(int num);

int main(void)
{
	int num;

	printf("양수 입력 :");
	scanf("%d", &num);

	prime_che(num);

	return 0;
}

void prime_che(int num)
{
	int *np = (int *)malloc((num - 1) * sizeof(int));

	for (int i = 0; i < (num - 2); i++)
	{
		np[i] = i + 2;
	}

	while (1)
	{
	}
	
		
}
