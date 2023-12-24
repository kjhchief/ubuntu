#include <stdio.h>

int x = 20;

int main(void)
{
	printf("전역변수: %d\n", x);
	int x = 5;
	
	printf("지역변수: %d\n", x);

	return 0;
}


