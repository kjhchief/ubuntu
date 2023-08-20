#include <stdio.h>

int sum10(void);
int sum100(void);
int sum1000(void);

int main(void)
{
	int res1;
	res1 = sum10();
	printf("%d\n", res1);
}


int sum10(void)
{
	int result;

	for(int i = 1; i <= 10; i++)
		result += i;

	return result;
}

int sum100(void)
{

}

int sum1000(void)
{

}
