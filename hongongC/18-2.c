#include <stdio.h>

int main(void)
{
	FILE *fp;
	int ch;
	char str[80];
	int i = 0;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		//putchar(ch);
		str[i] = ch;
		i++;
	}
	printf("%s", str);

	fclose(fp);

	return 0;
}
