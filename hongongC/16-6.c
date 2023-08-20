#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("명령행 인수 갯수 : %d\n", argc);

	return 0;
}
