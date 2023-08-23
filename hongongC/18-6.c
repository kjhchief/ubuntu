#include <stdio.h>

int main(void)
{
	FILE *fp;
	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
	int i, res;

	fp = fopen("a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp);
	}
	fclose(fp);

	fp = fopen("a.txt", "rt");
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);

	return 0;
}
// 유닉스시스템은 줄바꿈에 \n만 사용하기에 파일 형태 텍스트, 바이너리로 구분하지 않고 모두 바이너리로 취급.
