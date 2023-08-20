#include <stdio.h>

void my_strcat (char *str1, char *str2);

int main(void)
{
	char str[80] = "straw";

	my_strcat(str, "berrynicegood");
	printf("%s\n", str);

	return 0;
}

void my_strcat (char *str1, char *str2)
{
	while(*str1 != '\0')
		str1++;

	while(*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';
}
