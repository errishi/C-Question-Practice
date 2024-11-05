/*Write a program to find Fibonacci series by using recursive function*/

#include <stdio.h>
#include <conio.h>

int fibonacci(int n)
{
    //base condition
    if (n == 0||n == 1)
    {
        return n;
    }
    //recursion call
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int num;
    printf("Enter number to find fibonacci series:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ",fibonacci(i));
    }
    
    return 0;
}