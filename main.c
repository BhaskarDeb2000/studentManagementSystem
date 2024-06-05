#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

struct studentInfo
{
    char name[50];
    int studentID;
    float gpa;
};

int main()
{
    int a;
    printf("Please enter the total Number of Students: ");
    scanf("%d", &a);
    struct studentInfo students[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter Student %d's Name: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter Student %d's ID: ", i + 1);
        scanf("%d", &students[i].studentID);
        printf("Enter Student %d's GPA: ", i + 1);
        scanf("%f", &students[i].gpa);
        sleep(1);
        printf("\n");
    }
    printf("Please wait for the Registraton to be Completed.");
    sleep(2);
    printf("\n\n");
    printf("Registration Completed Successfully.\n");
    sleep(1);
    printf("Here is the Student Information:\n");
    sleep(1);
    for (int i = 0; i < a; i++)
    {

        printf("Student %d's Name: %s\n", i + 1, students[i].name);
        printf("Student %d's ID: %d\n", i + 1, students[i].studentID);
        printf("Student %d's GPA: %.2f\n", i + 1, students[i].gpa);
        sleep(1);
        printf("\n");
    }
    return 0;
}