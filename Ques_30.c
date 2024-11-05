/*Write a program to store the information of Students like roll no, name, course,percentage using Structure*/

#include <stdio.h>

// Define the structure for student information
struct Student {
    int rollNo;
    char name[50];
    char course[50];
    float percentage;
};

int main() {
    int n;

    // Get the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declare an array of structures to store student information
    struct Student students[n];

    // Input information for each student
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);

        // Input roll number
        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);

        // Input name
        printf("Enter Name: ");
        scanf("%s", students[i].name);

        // Input course
        printf("Enter Course: ");
        scanf("%s", students[i].course);

        // Input percentage
        printf("Enter Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Display information for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Course: %s\n", students[i].course);
        printf("Percentage: %.2f\n", students[i].percentage);
    }

    return 0;
}
