/*Write a program to find sum of series
1 − 3 + 5 − 7 + 9 − …*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, sum = 0;
    int sign = 1;

    printf("Enter number:");
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        if (i % 2 != 0)
        {
            sum = sum + i * sign;
            sign = -1; // change the sign
        }
    }
    printf("The sum of series %d", sum);
    return 0;
}