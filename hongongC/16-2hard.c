#include <stdio.h>
#include <stdlib.h>

void print_prime(int num);

int main(void)
{
	int num;

	printf("양수 입력: ");
	scanf("%d", &num);

	print_prime(num);
}

void print_prime(int num)
{
	int count = 0;
	int *nums;
	for (int i = 2; i <= num; i++)
	{	
		nums[i] = (int *)malloc(sizeof(int));
		count++;
		int isPrime = 1;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = 0;
				break;
			}
		}

		if (isPrime)
			printf("%3d", i);
		else
			printf("%3c", 'X');
		if (count % 5 ==0)
			printf("\n");
	}
	free(nums);
}
