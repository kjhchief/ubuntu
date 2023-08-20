#include <stdio.h>

int sum(int n);

int main(void)
{
	int result = sum(10);

	printf("%d\n", result);

	return 0;
}

int sum(int n)
{
	int total;

	if (n == 1)
		return 1;
	else
	
		total = n + sum(n - 1);

	return total;

}

