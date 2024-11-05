/*Write a program to enter the two matrix by user and multiply in 3rd matrix*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100][100],b[100][100],ab[100][100];
    int m1,n1,m2,n2;
    int sum = 0;
    printf("Enter row of matrix A:");
    scanf("%d",&m1);
    printf("Enter column of matrix A:");
    scanf("%d",&n1);
    //Input matrix A
    printf("Enter the element of matrix A\n");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("(%d,%d)=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter row of matrix B:");
    scanf("%d",&m2);
    printf("Enter column of matrix B:");
    scanf("%d",&n2);
    //Input matrix B
    printf("Enter the element of matrix B\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("(%d,%d)=",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //product 
    if (n1 == m2)
    {
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                }
                ab[i][j] = sum;
                sum = 0;
            }
        }
    }
    else{
        printf("Can't multiply this matrix.");
    }
    //print product
    printf("The product of the matrix\n");
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d ",ab[i][j]);
        }
        printf("\n");
    }
    return 0;
}