//202510304106
//18957760988@163.com
//叶子恒
#include <stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a)
    {
        printf("可以组成三角形");
    }
    else
    {
        printf("不能组成三角形");
    }
    return 0;

}
