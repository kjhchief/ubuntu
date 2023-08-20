#include <stdio.h>

int print_prime_number(int num)
{


	for (int i = 2; i < num; i++)
	{
		int is_prime = 1;
		
		for(int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_prime = 0;
				break;
			}
		}
		
		if(is_prime)
		{
			printf("%d\n", i);
		}
	}




}

int main(void)
{
	int n;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);

	print_prime_number(n);


	return 0;


}
