#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct studentInfo
{
    char name[50];
    int studentID;
    float gpa;
};

int main()
{
    int numStudents;

    printf("Please enter the total number of students: ");
    scanf("%d", &numStudents);
    char name[50];
    printf("%s\n", name);

    if (numStudents <= 0)
    {
        printf("Error: Please enter a positive number of students.\n");
        return 1;
    }

    struct studentInfo students[numStudents];

    for (int i = 0; i < numStudents; i++)
    {
        printf("Enter Student %d's Name: ", i + 1);
        scanf("%s", students[i].name);
        scanf("%s", name);

        bool duplicateFound = false;
        if (strcmp("alak", students[i].name) == 0)
        {
            duplicateFound = true;
            continue;
        }
        printf("%d>>>>>>>", duplicateFound);

        if (duplicateFound == true)
        {
            printf("Error: Student name already exists. Please enter a unique name: ");

            scanf("%s", students[i].name);
            continue;
        }

        printf("Enter Student %d's ID: ", i + 1);
        scanf("%d", &students[i].studentID);

        printf("\n\n>>>>> >>> ><<>%d >>>>>>.\n\n", students[i].studentID);

        if (students[i].studentID <= 0)
        {
            printf("Error: Student ID must be positive. Please enter a valid ID.\n");
            continue;
        }

        printf("Enter Student %d's GPA: ", i + 1);
        scanf("%f", &students[i].gpa);

        if (students[i].gpa < 0.0 || students[i].gpa > 4.0)
        {
            printf("Error: GPA must be between 0.0 and 4.0. Please enter a valid GPA.\n");
            continue;
        }
    }

    printf("Registration Completed Successfully.\n\n");

    printf("Here is the Student Information:\n");

    for (int i = 0; i < numStudents; i++)
    {
        printf("Student %d's Name: %s\n", i + 1, students[i].name);
        printf("Student %d's ID: %d\n", i + 1, students[i].studentID);
        printf("Student %d's GPA: %.2f\n", i + 1, students[i].gpa);
        printf("\n");
    }

    return 0;
}
