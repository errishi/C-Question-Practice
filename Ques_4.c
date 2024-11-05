/*Write a program to find the area of square, circle, rectangle and triangle.*/

#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    float Area;
    int length, breath, choice;

    while (true)
    {
        printf("1.Area of square.");
        printf("\n2.Area of Rectangle.");
        printf("\n3.Area of Circle.");
        printf("\n4.Area of Triangle.");
        printf("\n5.Quit.");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            {
                printf("Enter Side:");
                scanf("%d", &length);
                Area = (float)length * length;
                printf("Area of Square is %0.3f Unit sq.\n", Area);
                break;
            }
            case 2:
            {
                printf("Enter Length:");
                scanf("%d", &length);
                printf("Enter Breath:");
                scanf("%d", &breath);
                Area = (float)length * breath;
                printf("Area of Rectangle is %0.3f Unit sq.\n", Area);
                break;
            }
            case 3:
            {
                printf("Enter Radius:");
                scanf("%d", &length);
                Area = (float)3.14 * length * length;
                printf("Area of Circle is %0.3f Unit sq.\n", Area);
                break;
            }
            case 4:
            {
                printf("Enter Base:");
                scanf("%d", &length);
                printf("Enter Height:");
                scanf("%d", &breath);
                Area = (float)0.5 * length * breath;
                printf("Area of Triangle is %0.3f Unit sq.\n", Area);
                break;
            }
            case 5:
            {
                exit(0);
            }
            default:
            {
                printf("Invalid ! Try again.");
                break;
            }
        }
    }
    return 0;
}