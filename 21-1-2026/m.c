#include <stdio.h>

int main() {
    char name[50];
    int roll;
    int age;
    char course[50];
    float marks;

printf("Enter student name: ");
scanf("%s", name);
printf("Enter roll number: ");
scanf("%d", &roll);
printf("Enter age: ");
scanf("%d", &age);
printf("Enter course name: ");
scanf("%s", course);
printf("Enter marks: ");
scanf("%f", &marks);

printf("Student Details");
 printf("Name: %s\n", name);
 printf("Roll No: %d\n", roll);
 printf("Age: %d\n", age);
 printf("Course: %s\n", course);
 printf("Marks: %.2f\n", marks);

    return 0;
}
