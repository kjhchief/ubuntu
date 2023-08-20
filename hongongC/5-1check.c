#include <stdio.h>

int main(void)
{
	int a = 4;

	if (a < 0)
	{
		a = -a;
	}
	printf("1번 예시: %d\n", a); //1

	if (a % 2 ==0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}
	printf("2번 예시: %d\n", a); //1



	return 0;
}
