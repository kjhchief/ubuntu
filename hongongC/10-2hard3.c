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

    for (int i = 0; i < 6; i++)
    {
        printf("번호 입력: ");
        scanf("%d", &num);

        if (num >= 1 && num <= 45)
        {
            int isDuplicate = 0;  // 중복 여부를 확인하는 변수

            for (int j = 0; j < i; j++)
            {
                if (lotto_nums[j] == num)
                {
                    isDuplicate = 1;  // 중복된 번호가 있음을 표시
                    break;
                }
            }

            if (isDuplicate)
            {
                printf("중복 번호가 있습니다.\n");
                i--;  // 중복이 발견되면 번호를 건너뜁니다.
            }
            else
            {
                lotto_nums[i] = num;  // 중복이 없으면 번호를 저장
            }
        }
        else
        {
            printf("범위를 초과한 번호입니다.\n");
            i--;  // 범위 초과한 번호도 건너뜁니다.
        }
    }
}

void print_nums(int *lotto_nums)
{
    printf("로또 번호: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%3d", lotto_nums[i]);
    }
    printf("\n");
}

