//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int arr[5];
    int cnt=0;
    int a;
    int i=0;
    while (cnt<5)
    {
        scanf("%d",&a);
        if (a%2==0)
        {
            arr[i]=a;
            cnt+=1;
            i++;
        }
    }
    for (int j=0;j<4;j++)
    {
        printf("%d ",arr[j]);
    }
    printf("%d",arr[4]);
    
    return 0;
}
