#include <stdio.h>
int main(void)
{
	double height = 179.5;
	double weight = 75.0;
	printf("%.1lf\n", height);
	printf("%.1lf\n", weight);
	if ((height >= 187.5) && (weight < 80))
	{
		printf("ok\n");
	}
	else
	{
		printf("cancel\n");
	}


	return 0;
}
