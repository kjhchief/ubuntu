#include <stdio.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("입력한 문자열은 %s입니다.", str);

	return 0;
}
