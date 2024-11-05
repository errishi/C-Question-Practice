/*Write a program to check if entered string is Armstrong or not*/

#include <stdio.h>
#include <string.h>
#include <math.h>

// Function to check if a string is an Armstrong string
int isArmstrongString(char *str)
{
    int length = strlen(str);
    int result = 0;

    for (int i = 0; i < length; i++)
    {
        result += pow((int)str[i], length);
    }

    return (result == length);
}

int main()
{
    char inputString[100];

    // Input the string from the user
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Check if the entered string is an "Armstrong" string
    if (isArmstrongString(inputString))
    {
        printf("%s is an Armstrong string.\n", inputString);
    }
    else
    {
        printf("%s is not an Armstrong string.\n", inputString);
    }

    return 0;
}
