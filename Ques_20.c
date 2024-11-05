/*Write a program to search any value from the list using linear search*/

#include <stdio.h>

int main()
{
    int a[5], i, x;
    printf("Enter array element:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d", &x);
    for (int i = 0; i < 5; i++)
    {
        if (x == a[i])
        {
            printf("Element is found.");
            break;
        }
    }
    if (i == 5)
    {
        printf("The element is not found \n");
    }
    
    return 0;
}