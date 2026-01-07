#include <stdio.h>
int main() {
int a;
scanf("%d",&a);
if(a>90&&a<=100)
printf("Grade A");
else if(a>80&&a<=90)
printf("Grade B");
else if (a>45&&a<=80)
printf("c");
else 
printf("Fail");
    return 0;
}