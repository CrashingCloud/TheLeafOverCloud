//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>


int sum(int arr[],int l)
{
    int s=0;
    for (int i=0;i<l;i++)
    {
        s+=arr[i];
    }
    return s;
}

int multi(int arr[],int l)
{
    int m=1;
    for (int i=0;i<l;i++)
    {
        m=m*arr[i];
    }
    return m;
}

int main(void)
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s,m;
    int p1,p2,l1,l2;
    s=sum(arr,5);
    printf("%d ",s);
    m=multi(arr,5);
    printf("%d",m);
}
