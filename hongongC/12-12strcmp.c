#include <stdio.h>

int my_strcmp(char *str1, char *str2);

int main(void)
{
	char str1[80] = "apple";
	char str2[80] = "abb";

	printf("아스키 코드가 더 큰 단어 : ");
	if (my_strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else 
		printf("%s\n", str2);

	return 0;
}

int my_strcmp(char *str1, char *str2)
{
	int res = 0;
	while ((*str1 != '\0') && (*str2 != '\0'))
	{
		if (*str1 > *str2)
		{
			res = 1;
			break;
		}
		else if (*str1 < *str2)
		{
			res = -1;
			break;
		}
		else
		{
			str1++;
			str2++;
		}
	}

	return res;
}
