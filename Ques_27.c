/*Write a program to write all squares between 1 to 10 inside the file and read it.*/

#include <stdio.h>

int main()
{
    FILE *Sq_File;
    int square;

    Sq_File = fopen("square.txt", "w");

    // square
    for (int i = 1; i < 11; i++)
    {
        square = i * i;
        // to write in file
        fprintf(Sq_File, "%d * %d = %d\n", i, i, square);
    }
    fclose(Sq_File);

    // for file reading
    Sq_File = fopen("square.txt", "r");

    //read
    char digit[100];
    while (fgets(digit, sizeof(digit),Sq_File) != NULL)
    {
        printf("%s\n",digit);
    }    

    fclose(Sq_File);
    return 0;
}