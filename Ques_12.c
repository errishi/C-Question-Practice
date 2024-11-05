/*Write a program to print the pyramid:
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, k = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; ++i, k = 0)
    {
        for (int space = 1; space <= num - i; ++space)
        {
            printf("  ");
        }
        while (k != 2 * i - 1)
        {
            printf("* ");
            ++k;
        }
        printf("\n");
    }
    return 0;
}
