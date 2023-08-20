#include <stdio.h>

void print_star(char *str);

int main(void)
{
	char str[17];
	printf("단어 입력 : ");
	fgets(str, 17, stdin);
	printf("입력한 단어 : %s,", str);
	print_star(str);
	printf("생략한 단어 : %s", str);

	return 0;

}

void print_star(char *str)
{
	int count = 0;
	while (count < 5)
	{
		str++;
		count++;
	}

	while (*str != '\n')
	{
		*str = '*';
		str++;
	}
}
