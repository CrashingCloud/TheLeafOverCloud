//202510304106
//18957760988@163.com
//叶子恒

#include<stdio.h> 
int main(void)
{
    int n = 0;
    int k = 0;
    printf("n=");
    scanf("%d",&n);
    if (n>50)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        printf("密钥不安全，请重新输入");
        return 0;
    }
    for (int i = 1;i<50;i+=2)
    {
       if (n%i==0)
       {
            k+=1;
       }
    }
    if (k<=2)
    {
        printf("密钥安全，密码设置成功");
    }
    else
    {
        printf("密钥不安全，请重新输入");
    }
    return 0;
}                                                                                         
