//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int a,b,c;
    int i = 100;
    int sum = 0;
    int cnt = 0;
    while (i<=999)
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
        i+=1;
    }
    return 0;
}
