//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int arith(int a1,int an,int step)
{
    int n=0;
    int sum=0;
    n=(an-a1)/step+1;
    sum=a1*n+(n-1)*n/2*step;
    return sum;
}
int main(void)
{
    int sum=0;
    sum=arith(1,100,1);
    printf("%d",sum);
}
