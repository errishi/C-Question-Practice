/*Write a program to count all prime numbers from 1-100.*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, count;
    printf("Prime number between 1 to 100.\n");
    for (num = 1; num <= 100; num++)
    {
        count = 0;
        for (int i = 2; i < num / 2; i++)
        {
            if (num % i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && num != 1)
        {
            printf("%d \n", num);
        }
    }

    return 0;
}