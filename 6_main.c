//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *p=(int*)malloc(5*sizeof(int));
    if (p == NULL)
    {
        printf("内存分配失败\r\n");
        return 1;
    }
    for (int i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for (int i=0;i<4;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("%d",*(p+4));

    free(p);
    p=NULL;
    return 0;
}
