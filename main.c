#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,ml=1,mu=1;
    scanf("%d",&n);
    int matrix[n][n],matrixl[n][n],matrixu[n][n];
    void lower(int matrix[n][n],int n)
    {
        for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                    {
                    if (i < j)
                        {
                        matrixl[i][j]=0;
                        }
                    else
                        matrixl[i][j]=matrix[i][j];
                    }
            }
    }
    void upper(int matrix[n][n],int n)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if(i>j)
                {
                    matrixu[i][j]=0;
                }
                else
                    matrixu[i][j]=matrix[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    lower(matrix,n);
    upper(matrix,n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(matrix[i][j]!=matrixl[i][j])
            {
                ml=0;
            }
            if(matrix[i][j]!=matrixu[i][j])
            {
                mu=0;
            }
        }
    }
    if((mu==1)||(ml==1))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
