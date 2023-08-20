#include <stdio.h>
#include <string.h>

int main(void)
{
	const char sen[20] = "대한민국";

	printf("%s\n", sen);
	strcpy(sen, "바꿔민국");
	printf("%s\n", sen);

	return 0;
}
