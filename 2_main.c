//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    for (int i=0;i<5;i++)
    {
        *(p+i)*=2;
    }
    for (int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[4]);
    return 0;
}
