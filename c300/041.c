#include <stdio.h>

int main(void)
{
	int saram_A;
	int *saram_A_pt;

	saram_A_pt = &saram_A;

	scanf("%d", saram_A_pt);
	printf("%d\n", saram_A);

	return 0;
}

