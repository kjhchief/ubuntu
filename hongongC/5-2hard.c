#include <stdio.h>


int cal(int a, int b, char sign);

int main(void)
{
	int a;
	int b;
	char sign;
	int result;

	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &a, &sign, &b);
	result = cal(a, b, sign);
	printf("%d %c %d = %d\n", a, sign, b, result);
	
}

int cal(int a, int b, char sign)
{
	int result;
	
	if (sign == '+')
	{
		result = a + b;
	}
	else if (sign == '-')
	{
		result = a - b;
	}
	else if (sign == '*')
	{
		result = a * b;
	}
	else if (sign == '/')
	{
		result = a / b;
	}

	return result;
}
