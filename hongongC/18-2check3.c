#include <stdio.h>

int main(void)
{
	FILE *fp;
	char str[20] = "empty";
	int ch;

	fp = fopen("a.txt", "r");
	if(fp == NULL)
	{
		printf("파일을 열지 못했습니다.");
		return 1;
	}
	//ch = fgetc(fp);
	//while (fgetc(fp) != EOF);

	fgets(str, sizeof(str), fp);
	fgets(str, sizeof(str), fp);
	printf("%s", str);
	fclose(fp);

	return 0;
}
