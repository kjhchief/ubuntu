#include <stdio.h>

int my_strlen (char *str);

int main(void)
{
	char str1[100], str2[100];
	char *resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (my_strlen(str1) > my_strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은: %s\n", resp);
	printf("str1 : %d\n", my_strlen(str1));
	printf("str2 : %d\n", my_strlen(str2));

	return 0;
}

int my_strlen (char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		str++;
		count++;
	}


	return count;

}
