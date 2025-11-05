//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>

void reve(int arr[],int l)
{
    int n=0;
    n=l/2;
    int temp;
    for (int i=0;i<n;i++)
    {
        temp=arr[i];
        arr[i]=arr[l-1-i];
        arr[l-1-i]=temp;
    }
    
}
int main(void)
{
    int arr[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reve(arr,5);
    for (int i=0;i<5;i++)
    {
        if (i<4)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            printf("%d",arr[i]);
        }
        
    }
    return 0;
}
