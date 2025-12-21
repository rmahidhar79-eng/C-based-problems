#include <stdio.h>
int main() {
 int marks;
 scanf("%d",&marks);
 if ((marks>=35)&&(marks<=100))
    printf("pass");
    else if ((marks>=30)&&(marks<=34))
    printf("grace pass");
    else
    printf("fail");
    return 0;
}