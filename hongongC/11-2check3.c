#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;
	ch = getchar();

	while (ch != '\n')
	{
		if((97 <= ch) && (ch <= 122) ) //97 ~ 122
		{
			cnt++;
		}
		ch = getchar();
	}

	printf("소문자의 개수: %d\n", cnt);
	printf("입력한 문자열: %d\n", ch);

	return 0;
}
