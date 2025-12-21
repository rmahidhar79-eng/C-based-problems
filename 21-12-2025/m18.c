#include <stdio.h>
int main() {
int num;
scanf("%d",&num);
if ((num%4==0)&&(num%8!=0))
printf("yes");
else
printf("no");

    
    return 0;
}