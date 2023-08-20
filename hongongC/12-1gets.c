#include <stdio.h>

void gets(char *ps);

int main(void)
{
	char str[80];

	printf("문자열 입력: ");
	gets(str);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;

}

void gets(char *ps)
{
	char ch;
	
	int i = 0;
	while(1)
	{
		ch = getchar();
		ps[i] = ch;
		i++;
		if (ch == '\n')
		{
			i--;
			ps[i] = '\0';
			break;
		}
	}

}
