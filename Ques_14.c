/*Write a program to print the pyramid:
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    for (int i = num; i >=1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}