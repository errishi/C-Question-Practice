/*. Write a program to find the greatest between 5 numbers by using conditional operator.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int greatest,num1,num2,num3,num4,num5;
    printf("Enter any five number:\n");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
    greatest = ((num1>num2&&num1>num3&&num1>num4&&num1>num5)?num1:(num2>num3&&num2>num4&&num2>num5)?num2:(num3>num4&&num3>num5)?num3:(num4>num5)?num4:num5);
    printf("The greatest number is %d\n",greatest);
    return 0;
}