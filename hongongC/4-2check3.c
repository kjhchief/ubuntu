#include <stdio.h>

int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time = time - hour;
	time = time * 60; // 60을 곱하여 분으로 환산
	min = (int)time;
	time = time - min;
	time = time * 60;
	sec = (int)time;
	printf("3.76 시간은 %d시간 %d분 %d초 입니다.\n", hour, min, sec);
	
	return 0;
}
