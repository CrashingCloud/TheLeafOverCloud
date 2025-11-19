//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>

void back(int arr[]);

int main(void)
{
    int len=5;
    int arr[len];
    for (int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    back(arr);
    for (int i=0;i<len-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[4]);
    return 0;
}

void back(int arr[])
{
    int len=5;
    int *ptr_arr=arr;
    for (int i=len-1;i>0;i--)
    {
        *(ptr_arr+i)=*(ptr_arr+i-1);
    }
    *ptr_arr=0;
}
