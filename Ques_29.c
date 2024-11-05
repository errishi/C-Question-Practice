/*Write a program to find factorial by using recursive function*/

#include<stdio.h>
#include<conio.h>

int factorial(int n)
{
    if (n == 0||n == 1)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main()
{
    int num;
    printf("Enter number to find factorial:");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,factorial(num));
    return 0;
}