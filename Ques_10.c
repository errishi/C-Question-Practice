/*Write a program to print the pyramid:
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1*/

#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i >= 1; --i)
    {
        for (j = rows; j >= i; --j)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
