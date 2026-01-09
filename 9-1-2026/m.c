#include <stdio.h>

int main() {
    int i, marks, total = 0;
float percentage;
 printf("Enter marks of 5 subjects:\n");
for(i = 1; i <= 5; i++) {
printf("Enter subject %d marks: ", i);
scanf("%d", &marks);
total = total + marks;
}
percentage = (total / 500.0) * 100;
printf("\nTotal Marks = %d", total);
printf("\nPercentage = %.2f%%", percentage);

    return 0;
}
