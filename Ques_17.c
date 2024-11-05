/*Write a program to sort the list in ascending order by using Insertion Sort.*/

#include<stdio.h>

int main()
{
    int a[100];
    int n,key;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("Enter the element in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    //insertion logic
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    printf("The sorted array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}