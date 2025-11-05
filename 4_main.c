//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>

int power(int a,int b)
{
        
    if (b==0)
    {
        a=1;
            
    }
    else if (b==1)
    {
        a=a;
    }
    else if (b>1)
    {
        for (int i=0;i<b-1;i++)
        {
            a=a*a;
        }
     }
    return a;
}
    
int main(void)
{
    int sum=0;
    for (int i=1;i<=5;i++)
    {
        sum+=power(i,2);
    }
    printf("%d",sum);
}
