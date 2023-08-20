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
	int num;

	for(int i = 0; i < 6; i++)
	{
		int dup = 0;
		printf("번호 입력: ");
		scanf("%d", &num);
		
		if ( (0 < num) && (num < 46) )
		{
			for(int j = 0; j < i; j++)
			{
				if (lotto_nums[j] == num)
				{
					dup = 1;
					break;
				}
			}
			if (dup)
			{
				printf("중복 번호가 있습니다.\n");
				i--;
			}
			else
			{
				lotto_nums[i] = num;
			}

		}
		else
		{
			printf("범위를 초과한 번호입니다.\n");
			i--;
		}
		
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

