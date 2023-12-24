#include <stdio.h>

struct score
{
	int korean;
	int english;
	int math;

};

int main(void)
{
	struct score kjh;
	int total;

	kjh.korean = 80;
	kjh.english = 90;
	kjh.math = 77;

	total = kjh.korean + kjh.english + kjh.math;

	printf("총점: %d\n", total);


	return 0;
}
