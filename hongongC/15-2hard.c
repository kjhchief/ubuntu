#include <stdio.h>
#include <string.h>

void swap(char *type, void *vp1, void *vp2);

int main(void)
{
	int age1, age2;
	double height1, height2;

	printf("첫 번째 사람의 나이와 키 입력: ");
	scanf("%d %lf", &age1, &height1);
	printf("두 번째 사람의 나이와 키 입력: ");
	scanf("%d %lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키: %d, %.1lf\n", age1, height1);
	printf("두 번째 사람의 나이와 키: %d, %.1lf\n", age2, height2);
}

void swap(char *type, void *vp1, void *vp2)
{
	if ( (strcmp(type, "int") == 0))
	{
		int temp;
		temp = *(int *)vp1;
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = temp;
	}

	else if ( (strcmp(type, "double") == 0))
	{
		double temp;
		temp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = temp;
	}

}
