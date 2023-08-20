#include <stdio.h>
#include <string.h>

int main(void)
{
	char sen[80];
	int count;

	printf("문자 입력: ");
	fgets(sen, sizeof(sen), stdin);
	sen[strlen(sen) - 1] = '\0';	

	for(int i = 0; i < sizeof(sen); i++)
	{

		if((65 <= sen[i]) && (sen[i] <= 90))
		{
			sen[i] = sen[i] + 32;
			count++;
		}
		
	}

	printf("바뀐 문장: ");
	puts(sen);
	printf("바뀐 문자 수: %d\n", count);




	return 0;
}
