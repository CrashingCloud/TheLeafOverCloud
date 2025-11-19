//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int arr[10];
    for (int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int temp=0;
    for (int i=1;i<10;i++)
    {
        for (int j=0;j<10-i;j++)
        {
            if (*(p+j)>*(p+j+1))
            {
                temp=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=temp;
            }
        }
    }
    for (int i=0;i<9;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("%d",*(p+9));
    return 0;
}
