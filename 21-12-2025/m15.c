#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if ((age<20)&&(age>13))
    printf("teen");
    else if ((age>0)&&(age<13))
printf("child");
else
printf("adult");
    
    return 0;
}