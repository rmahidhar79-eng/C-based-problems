#include <stdio.h>
int main() {
int age,salary;
scanf("%d %d",&age,&salary);
if ((age>=25)&&(salary>=30000))
printf("eligible");
else
printf("not eligible");
    
    return 0;
}