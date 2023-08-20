#include <stdio.h>

int main(void)
{
	int ary[4] = { 0, 1, 2, 3 };
	int *p;
	p = ary;

	printf("ary[0]과 p[0]은 같다: %d\n", ary[0] == *(p + 0));
	printf("ary[0]과 p[1]은 같다: %d\n", ary[0] == p[1]);
	printf("ary[1]과 p[1]은 같다: %d\n", ary[1] == p[1]);
	printf("ary[1]: %d\n", ary[1]);
	printf("p[1]: %d\n", p[1]);
	printf("p + 1: %p\n", p + 1);
	printf("ary + 1: %p\n", ary + 1);

	return 0;
}
