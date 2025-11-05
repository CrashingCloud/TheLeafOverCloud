//202510304106
//18957760988@163.com
//叶子恒
#include<stdio.h>
int main(void)
{
    int row=3,col=3;
    int mat[row][col];
    int a=0;
    
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a);
            mat[i][j]=a;
        } 
    }

    for (int i=0;i<row;i++)
    {
        for (int j=0; j<col-1; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("%d\r\n",mat[i][2]);
    }
    return 0;
}

