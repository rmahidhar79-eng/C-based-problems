#include <stdio.h>

int main() {
    int marks, attendance;
    char medical;

    printf("Enter student marks (0 - 100): ");
    scanf("%d", &marks);

    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);

    printf("Medical certificate available? (Y/N): ");
    scanf(" %c", &medical);

    
    if (marks >= 0 && marks <= 100) {


    if (marks >= 40) {
    printf("\nResult: PASS\n");
    if (marks >= 90) {
     printf("Grade: A+\n");
    } else {
    if (marks >= 75) {
         printf("Grade: A\n");
     } else {
    if (marks >= 60) {
      printf("Grade: B\n");
     } else {
     if (marks >= 50) {
     printf("Grade: C\n");
     } else {
     printf("Grade: D\n");
         }
     }
    }
    }
            if (marks >= 85) {
                printf("Scholarship: Eligible\n");
            } else {
                printf("Scholarship: Not Eligible\n");
            }

        } else {
            printf("\nResult: FAIL\n");
            printf("Grade: F\n");
            printf("Scholarship: Not Eligible\n");
        }


        if (attendance >= 75) {
            printf("Attendance: Eligible for exams\n");
        } else {
            if (medical == 'Y' || medical == 'y') {
                printf("Attendance: Eligible due to medical certificate\n");
            } else {
                printf("Attendance: Not Eligible for exams\n");
            }
        }

    } else {
        printf("\nInvalid marks entered\n");
    }

    return 0;
}
