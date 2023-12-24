#include <stdio.h>

int main(void)
{
	char str[10] = "abcde";
	int i = 0;

	printf("문자열: %s\n", str);

	while(str[i] != '\0')
	{

		i++;
	}

	printf("문자열 abcde의 길이: %d개\n", i);


	return 0;
}
