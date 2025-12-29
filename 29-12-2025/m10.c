#include <stdio.h>
int main() {
int marks;
scanf("%d",&marks);
if (marks>=85&&marks<=100)
printf("Grade A");
else if(marks>=60&&marks<=84)
printf("Grade B");
else if(marks>=45&&marks<=59)
printf("Grade C");
else 
printf("Grade F");
    return 0;
}