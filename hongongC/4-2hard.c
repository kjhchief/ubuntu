#include <stdio.h>

int main(void)
{
	double weight;
	double height;
	double bmi;

	printf("몸무게(kg)와 키(cm)입력: ");
	scanf("%lf%lf", &weight, &height);
	printf("\n");
	height = height / 100.0; //미터 단위로 환산
	bmi = weight / (height * height);

	printf("%s",(25.0 > bmi) && (bmi >= 20.0) ? "표준입니다\n" : "체중관리가 필요합니다\n");

	return 0;

}
