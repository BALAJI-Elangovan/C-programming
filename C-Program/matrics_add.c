#include<stdio.h>
int main()
{
    int r,c,mat1[100][100],mat2[100][100],result[100][100];
    printf("enter the rows and columns : ");
    scanf("%d%d",&r,&c);
    printf("enter the matrix 1 :");
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
    }
     printf("enter the matrix 2 :");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
    }

    //adding
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
               result[i][j] = mat1[i][j]+mat2[i][j];
            }
    }
    //result
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            {
               printf("%d ",result[i][j]);
            }
            printf("\n");
    }
}