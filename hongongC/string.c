#include <stdio.h>

void print_str(char **str)
{

	for (int i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
}

int main(void)
{
	char *str[3] =
	{
		"hello",
		"my name",
		"youhoo"
	};

	print_str(str);


	return 0;
}
