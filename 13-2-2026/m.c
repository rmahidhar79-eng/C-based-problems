#include <stdio.h>

int main() {
int n, i, j, a = 0, b = 1, c, count = 0, flag;

printf("Enter number of terms: ");
scanf("%d", &n);

for(i = 1; i <= n; i++) {
flag = 1;

if(a <= 1)
flag = 0;
else {
for(j = 2; j <= a/2; j++) {
if(a % j == 0) {
flag = 0;
break;
}
}
 }

if(flag == 1)
count++;
c = a + b;
a = b;
printf("Prime numbers count in Fibonacci series: %d", count);
}
    return 0;
}