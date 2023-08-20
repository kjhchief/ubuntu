#include <stdio.h>
int main(void)
{
	int a;
	if (a < 0)
	{
		a = -a;
	}
	
	int b;
	scanf("%d", &b);
	if (b % 2 == 0) 
	{
		b = 2; // 짝수일 때
	}
	else
	{
		b = 1; // 홀수일 때
	}
	printf("%d", b);
}
