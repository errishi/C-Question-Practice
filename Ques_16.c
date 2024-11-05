/*Write a program to sort the list in ascending order by using Selection Sort.*/

#include<stdio.h>

int main()
{
    int a[100];
    int n,min,temp;
    printf("Enter the size of an array:\n");
    scanf("%d",&n);
    printf("Enter the element in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //selection sort process
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("The sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
    
}