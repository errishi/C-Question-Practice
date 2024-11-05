/*Write a program to print the pyramid:
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, count = 1;
    printf("Enter number:");
    scanf("%d", &num);
    printf("pattern\n");
    for (int i = 1; i < num + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", count);
            }
        }
        printf("\n");
    }
    return 0;
}