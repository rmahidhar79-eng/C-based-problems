#include <stdio.h>

int main() {
    
    int i;
    int totalStudents = 3;

    int roll[3];
    int marks[3];
    char name[3][20];

    
    for (i = 0; i < totalStudents; i++) {

        printf("\nEnter details for Student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }

    
    printf("\nStudent Details\n");

    for (i = 0; i < totalStudents; i++) {

        printf("\nStudent %d Details\n", i + 1);
        printf("Name       : %s\n", name[i]);
        printf("Roll Number: %d\n", roll[i]);
        printf("Marks      : %d\n", marks[i]);
    }

    printf("\nProgram Finished Successfully.\n");

    return 0;
}
