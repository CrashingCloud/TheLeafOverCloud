//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>

int arr[5]={1,2,3,4,5};

int sum(int p,int l)
{
    int s=0;
    for (int i=p;i<p+l;i++)
    {
        s+=arr[i];
    }
    return s;
}

int multi(int p,int l)
{
    int m=1;
    for (int i=p;i<p+l;i++)
    {
        m=m*arr[i];
    }
    return m;
}

int main(void)
{
    //for (int i=0;i<5;i++)
    //{
        //scanf("%d",&arr[i]);
    //}
    int s,m;
    s=sum(2,3);
    printf("%d ",s);
    m=multi(0,5);
    printf("%d",m);
}
