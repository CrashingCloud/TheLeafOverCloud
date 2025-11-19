//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
void swap(int *p,int *q)
{
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;
}
int main(void)
{
    int a=0;
    int b=0;
    scanf("%d",&a);
    scanf("%d",&b);
    int *p=&a;
    int *q=&b;
    swap(p,q);
    printf("%d ",a);
    printf("%d",b);
    return 0;
}
