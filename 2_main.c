//202510304106
//18957760988@163.com
//叶子恒
#include <stdio.h>

int main(void)
{
    int score;
    printf("Score：");
    scanf("%d",&score);
    //printf("%d",score);
    if (score < 0 || score > 100)
    {
        printf("null");
    }
    else
    {
        printf("Grade:");
        if (score >= 90)
        {
            printf("A");
        }
        else if (score >= 80)
        {
            printf("B");
        }
        else if (score >= 70)
        {
            printf("C");
        }
        else if (score >= 60)
        {
            printf("D");
        }
        else 
        {
            printf("E");
        }
    }
    return 0;
}
