#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "ccc";
	char str2[80] = "bbb";
	printf("%d\n", strcmp(str1, str2));

	char *name;

	printf("이름 입력: ");
	scanf("%s", name);

	printf("입력한 이름: %s\n", name);

	return 0;

}
