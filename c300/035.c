#include <stdio.h>

int main(void)
{
	int i = 1;
	int total;
	while (i <= 10)
	{
		total += i ;
		i++;	
	}
	printf("%d\n", total);

	return 0;
}
