#include <stdio.h>
#include <string.h>

int main(void)
{
	char sen[20];
	char sen2[20];

	strcpy(sen, "200");
	strcpy(sen2, "a");

	printf("%s\n", sen);
	printf("%s\n", sen2);
	
	return 0;
}
