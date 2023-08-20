#include <stdio.h>

int main(void)
{
	int seats = 70;
	int audience =65;
	double rate;

	rate = (double)audience / (double)seats;
	printf("입장률 : %.1lf%%\n", rate * 100);

	return 0;
}
