#include <stdio.h>

int main(void)
{
	FILE *fp;
	int age;
	char name[20];

	fp = fopen("a.txt","r");

	fscanf(fp, "%d", &age);
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);

	return 0;
}
