/*Write a program to copy the content of abc.txt to xyz.txt.*/

#include<stdio.h>
#include<conio.h>

int main()
{
    FILE *Myfile1,*my_file2 = NULL;
    char content[] = "Accurate Institute of Management and Technology";
    char c;
    Myfile1 = fopen("abc.txt","r");
    my_file2 = fopen("xyz.txt","w");
    c = fgetc(Myfile1);
    while (c != EOF)
    {
        fputc(c,my_file2);
        c = fgetc(Myfile1);
    }
    printf("\nContent copy to another file.");
    
    fclose(Myfile1);
    fclose(my_file2);
    return 0;
}