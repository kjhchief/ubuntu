#include <stdio.h>

int main(void)
{
	int res;

	//res = (sizeof(short) < sizeof(long)) ? 1 : 0;
	res = sizeof(short) > sizeof(long);

	//res == 1 ? printf("%d\n", res) : printf("long\n");
	printf("%s\n", (res == 1) ? "short" : "long");

	return 0;
}
