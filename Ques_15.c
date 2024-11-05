/*.Write a program to sort the list in ascending order by using Bubble Sort*/

#include <stdio.h>
#include<conio.h>

int main()
{
    int temp, a[100], n;
    printf("Enter the number of data:\n");
    scanf("%d", &n);
    printf("Enter the element of array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The element you enter\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    // to arrange the data in ascending or descending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //To print sorted data
    printf("\nThe arrange data is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    return 0;
}