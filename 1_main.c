//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int a=0;
    scanf("%d",&a);
    int *p=&a;
    *p+=10;
    printf("%d,",a);
    printf("%d",*p);
    return 0;
}
