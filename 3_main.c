//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int n = 0;
    int i = 1;
    int cnt = 0;
    int m = 50;
    printf("n=");
    scanf("%d",&n);
    if (n!=2 && n % 2 == 0)
    {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    if (n<m)
    {
        m=n;
    }

    while (i<m)
    {
        if (n%i==0)
        {
            cnt+=1;
        }
        i+=2;
    }
    if (cnt==2 || n==2)
    {
        printf("密钥安全，密码设置成功");
    }
    else
    {
        printf("密钥不安全，请重新输入");
    }
    return 0;


}
