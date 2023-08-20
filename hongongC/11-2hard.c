#include <stdio.h>

int main(void)
{
	int ch;
	int cnt = 0;
	int max = 0;

	while(1)
	{	
		ch = getchar();
		if (ch == EOF) break;
		cnt = 0;
		while (ch != '\n')
		{
			ch = getchar();
			cnt++;
		}
		printf("글자수: %d\n", cnt);
		if (cnt > max) max = cnt;
	}
	printf("가장 긴 글자 수: %d\n", max);
	return 0;
}
