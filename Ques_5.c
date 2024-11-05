/*Write a program to enter any digit number and check it is Armstrong or not*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num,temp,r,sum = 0;
    printf("Enter number to check armstrong or not.:\n");
    scanf("%d",&num);
    temp = num;
    while(num > 0)
    {
        r = num%10;
        sum = sum+(r*r*r);
        num = num/10;
    }
    if (sum == temp)
    {
        printf("The number %d is armstrong number.",temp);
    }
    else{
        printf("The number %d is not armstrong number.",temp);
    }
    return 0;
}