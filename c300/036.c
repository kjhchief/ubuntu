#include <stdio.h>

int main(void)
{
	int i = 1;
	int total;
	do
	{
		total += i;
		i++;
	} while (i <= 10);

	printf("%d\n", total);

	return 0;
}
