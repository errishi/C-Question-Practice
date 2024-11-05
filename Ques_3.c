/*Write a program to check whether entered character is vowel or not*/

#include <stdio.h>
#include <conio.h>

int main()
{
    char string, lower, upper;
    printf("Enter character:\n");
    scanf("%c", &string);
    lower = (string == 'a' || string == 'e' || string == 'i' || string == 'o' || string == 'u');
    upper = (string == 'A' || string == 'E' || string == 'I' || string == 'O' || string == 'U');

    if(lower||upper)
    {
        printf("The character you enter is vowel.");
    }
    else
    {
        printf("The character you enter is not vowel.");
    }
    return 0;
}