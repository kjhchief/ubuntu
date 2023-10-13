#include <stdio.h>

int main(void)
{
	int i = 4;
	int j;
	switch(i)
	{
		case 1:
			j = 100;
			break;
		case 2:
			j = 200;
			break;
		case 3: j = 300;
			break;
		default: 
			j = 1000;
			break;
	}
	printf("%d\n", j);

	return 0;
}
