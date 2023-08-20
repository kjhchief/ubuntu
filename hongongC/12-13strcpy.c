#include <stdio.h>

char* my_strcpy(char* str1, char* str2);

int main(void)
{
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열: %s\n", str);
	my_strcpy(str, "appaaaaaapaphohoho");
	printf("바꾼 후 문자열: %s\n", str);
	printf("다른 문자열 대입: %s\n", my_strcpy(str, "kiwi")); //반환값으로 출력

	return 0;
}

//my_strcpy()함수 구현
char* my_strcpy(char* str1, char* str2)
{
	char* ps = str1;

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = '\0';


	return ps;
}
