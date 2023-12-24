#include <stdio.h>

int len(char *str);

int main(void)
{
	int strlen = len("abdce");


	printf("문자열 길이: %d\n", strlen);
}

int len(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	return i;
}
