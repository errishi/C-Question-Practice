/*Write a program to enter any 3x3 matrix and transpose it.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int a[100][100],b[100][100];
    int i,j;
    printf("Enter the element of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("(%d,%d)=",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("The transpose of matrix is:");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    //print
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}