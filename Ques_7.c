/*Write a program to find sum of series
1 +2^2/2!+3^3/3!+ ⋯*/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int num, sum = 0, fact = 1;

    printf("Enter number:");
    scanf("%d", &num);
    for (int i = 1; i < num + 1; i++)
    {
        sum = sum + (pow(i, i) / (fact * i));
    }
    printf("The sum of the series is %d",sum);
    return 0;
}