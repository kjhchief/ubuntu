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
	ch = fgetc(fp); //이때 a.txt의 모든 내용이 버퍼에 입력되나?
	while (fgetc(fp) != EOF); //조건문만 있고 실행문이 없다. 즉 조건만 확인하고 아무 작업도 안 하고 반복된다. 

	fgets(str, sizeof(str), fp); //버퍼가 비었으니 입력을 못하고 NULL 반환.
	printf("%s", str); //걍 6행의 empty 출력
	fclose(fp);

	return 0;
}
