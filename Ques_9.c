/*Write a program to print the pyramid:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,count = 1;
    printf("Enter number:");
    scanf("%d",&num);
    printf("Pyramid pattern:\n");
    for (int i = 0; i < num+1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 0;
}