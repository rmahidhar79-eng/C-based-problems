#include <stdio.h>

int main() {
int m1, m2, m3, m4, m5;
int total;
float average;
scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

total = m1 + m2 + m3 + m4 + m5;
average = total / 5.0;
printf("Total Marks = %d\n", total);
printf("Average = %.2f\n", average);

if (average >= 90)
    printf("Grade: A");
else if (average >= 75)
    printf("Grade: B");
else if (average >= 60)
 printf("Grade: C");
else if (average >= 40)
printf("Grade: D");
else
printf("Grade: Fail");

    return 0;
}
