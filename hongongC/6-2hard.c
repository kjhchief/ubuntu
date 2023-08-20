#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int pn = 1;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	
	for(int j = 0; j)
	{
			
	}
	
	for(i = 2; i < num; i++)
	{
		if((num % i) == 0)
		{
			pn = 0;
			break;
	
		}
	}
	if (pn == 1)
	{
		printf("%d\n", num);
	}
	else
	{
		printf("소수가 아닙니다.\n");
	}
	return 0;

}
