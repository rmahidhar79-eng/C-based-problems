#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if ((marks>=90)&&(marks<=100))
    printf("A");
    else if ((marks>=75)&&(marks<=89))
printf("B");
else
printf("fail");

    
    return 0;
}