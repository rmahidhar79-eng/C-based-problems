#include <stdio.h>
int main() {
    //Your Code goes here!
    int salary; int finalsalary;
    scanf("%d",&salary);
    if (salary>=50000)
    finalsalary=salary-(salary*10/100);
    printf("%d",finalsalary);
    return 0;
}