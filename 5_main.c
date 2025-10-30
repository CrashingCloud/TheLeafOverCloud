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
    arr[4]=arr[0]+arr[1]+arr[2]+arr[3];
    for (int i=0;i<4;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("%d",arr[4]);

    return 0;
}
