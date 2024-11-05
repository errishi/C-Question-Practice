/*Write a program to swap of two number using call by reference.*/

#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main()
{
    int num1,num2;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("After swap first number is %d \n",num1);
    printf("After swap second number is %d \n",num2);
    return 0;
}