//202510304106
//18957760988@163.com
//叶子恒
#include <stdio.h>
int main(void)
{
    int mat[3][3];
    int tMat[3][3];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for (int j=0;j<3;j++)
    {
        for (int i=0;i<3;i++)
        {
            tMat[i][j]=mat[j][i];
        }

    }
    for (int i=0;i<3;i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("%d ",tMat[i][j]);
        }
        printf("%d\r\n",tMat[i][2]);
    }
    return 0;
}
