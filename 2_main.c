//202510304106
//18957760988@163.com
//叶子恒
#include <stdio.h>
int main(void)
{
    int a,b,c;
    int sum;
    int cnt=0;
    for (int i = 100;i<=999;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        sum=a*a*a+b*b*b+c*c*c;
        if (i==sum && cnt==1)
        {
            printf(" %d",sum);
        }
        if (i==sum && cnt==0) 
        {
            printf("%d",sum);
            cnt=1;
        }
    }

    return 0;
}
