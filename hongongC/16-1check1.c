#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *weight = (double *)malloc(sizeof(double));
	int *scores = (int *)malloc(10 * sizeof(int));
	char *string = (char *)calloc(80 * sizeof(char));

	return 0;
}
