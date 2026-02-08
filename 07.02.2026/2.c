#include <stdio.h>

int main() {
    float marks[6], total = 0, percentage;
    int i;

    printf("Enter marks for 6 subjects:\n");
    for(i = 0; i < 6; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    percentage = (total / 600) * 100;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 95)
        printf("Grade: A\n");
    else if (percentage >= 85)
        printf("Grade: B\n");
    else if (percentage >= 75)
        printf("Grade: C\n");
    else if (percentage >= 65)
        printf("Grade: D\n");
    else if (percentage >= 45)
        printf("Grade: E\n");
    else if (percentage < 45)
        printf("Grade: F\n");

    return 0;
}
