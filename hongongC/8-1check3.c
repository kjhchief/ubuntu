#include <stdio.h>

int main(void)
{
	int A[3] = {1, 2, 3};
	int B[10];
	int i;
/*	
	for(i = 0; i < 10; i++)
	{
		B[i] = A[i];
	}

	for(i = 0; i < 10; i++)
	{
		printf("%d\n", B[i]);
	}
	*/

	for(i = 0; i < 10; i++)
	{
		printf("%d\n", i%3);
	}
	
	return 0;
}
