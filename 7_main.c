//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int arr[5];
    //scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
    for (int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=4;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=0;
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


}
