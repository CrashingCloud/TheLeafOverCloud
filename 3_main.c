//202510304106
//18957760988@163.com
//叶子恒
#include <stdio.h>

int main(void)
{
    int a,b,d;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c)
    {
        case '+':
            d=a+b;
            printf("%d",d);
            break;
        case '-':
            d=a-b;
            printf("%d",d);
            break;
        case '*':
            d=a*b;
            printf("%d",d);
            break;
        case '/':
            d=a/b;
            printf("%d",d);
            break;
        default:
            printf("Null");
            break;

    }
    return 0;

}
