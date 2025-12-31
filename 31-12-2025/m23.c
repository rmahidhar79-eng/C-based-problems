#include <stdio.h>
int main() {
int num;int real,rem,rev=0;
scanf("%d",&num);
real=num;
while(num!=0){
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if(real==rev)
printf("palindrome");
else
printf("not palindrome");
    return 0;
}