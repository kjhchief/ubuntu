#include <stdio.h>
#include <string.h>

void word_arr(char *str1, char *str2, char *str3);

int main(void)
{

	char str1[80];
	char str2[80];
	char str3[80];

	printf("세 단어 입력 : ");
	scanf("%s%s%s", str1, str2, str3);
	word_arr(str1, str2, str3);
}

void word_arr(char *str1, char *str2, char *str3)
{

	char temp[80];

	while(!((strcmp(str1, str2) <= 0) && (strcmp(str2, str3) <= 0)))
	{
		if (strcmp(str1, str2) > 0)
		{
			strcpy(temp, str1);
			strcpy(str1, str2);
			strcpy(str2, temp);
		}
		if (strcmp(str2, str3) > 0)
		{
			strcpy(temp, str2);
			strcpy(str2, str3);
			strcpy(str3, temp);
		}
	}

	printf("%s, %s, %s\n", str1, str2, str3);
}
