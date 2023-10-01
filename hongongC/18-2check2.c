#include <stdio.h>

int main(void)
{
	char str[5];
	char ch;
	int i = 0;
	ch = fgetc(stdin);
	while ((i < (sizeof(str) - 1)) && (ch != '\n'))
	{
		str[i++] = ch;
		ch = fgetc(stdin);
	}
	if (i < (sizeof(str) - 1)) str[i++] = ch;
	str[i] = '\0';

	printf("%s", str);

	return 0;
}
