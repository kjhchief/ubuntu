#include <stdio.h>

int sum(int val);

int main(void)
{
	int n;
	int total;
	scanf("%d", &n);

	total = sum(n);
	printf("%d\n", total);

	return 0;
}

int sum(int val)
{
	int total;
	for (int i = 1; i <= val; i++)
	{
		total += i;
	}

	return total;
}
