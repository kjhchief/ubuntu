#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6];

	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}
void input_nums(int *lotto_nums)
{
	int temp;
	int dup = 1;
	for(int i = 0; i < 6; i++)
	{
		// 중복 확인
		printf("번호 입력: ");
		scanf("%d", &temp);

		if ((temp < 1) || (temp > 45))
		{
			
			printf("범위를 벗어난 숫자입니다(1 ~ 45범위 숫자 입력)\n");
			dup = 0;
			i--;
		}
		else
		{
			for(int j = 0; j < i; j++)
			{
				if(lotto_nums[j] == temp)
				{
					printf("같은 번호가 있습니다! 다시 입력\n");
					i--;
					dup = 0;
					break;
				}
			}
			
		}

		if (dup == 1)
			lotto_nums[i] = temp;
	}


}

void print_nums(int *lotto_nums)
{
	printf("로또 번호: ");	
	for(int i = 0; i < 6; i++)
	{
		printf("%3d", lotto_nums[i]);
	}
	printf("\n");
}
