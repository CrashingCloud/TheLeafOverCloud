//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int arr[10];
    int temp;
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=9;i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<10;i++)
    {
        if (i<9)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
    }
}
