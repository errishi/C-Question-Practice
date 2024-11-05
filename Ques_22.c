/*.Write a program to check if entered string is palindrome or not*/

#include<stdio.h>
#include<string.h>

int main()
{
    char str[30];
    int length;
    int count = 0;
    printf("Enter string:");
    gets(str);
    length = strlen(str);
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] != str[length - i - 1])
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("%s is not palindrome\n",str);
    }
    else{
        printf("%s is palindrome\n",str);
    }
    return 0;
}