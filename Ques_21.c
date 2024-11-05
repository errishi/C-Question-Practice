/*Write a program to search any value from the list using binary search*/

#include <stdio.h>

int main()
{
    int a[100], low, high, n, key, mid;
    printf("Enter number of element:");
    scanf("%d", &n);
    printf("Enter element\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the searching element:");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (a[mid] < key)
        {
            low = mid + 1;
        }
        else if (a[mid] == key)
        {
            printf("%d found at location %d\n", key, mid + 1);
            break;
        }
        else
        {
            high = mid - 1;
        }
        mid = (low + high) / 2;
        if (low > high)
        {
            printf("Element is not found\n");
        }
    }
    return 0;
}