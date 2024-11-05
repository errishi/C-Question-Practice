/*Write a program to check between 3 numbers which number is greater by using nested if*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int num1,num2,num3;
    printf("Enter any three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    if (num1>num2)
    {
        printf("The greatest number is %d\n",num1);
    }
    else{
        if (num2>num3)
        {
            printf("The greatest number is %d\n",num2);
        }
        else{
            printf("The greatest number is %d\n",num3);
        }
    }
    return 0;
}