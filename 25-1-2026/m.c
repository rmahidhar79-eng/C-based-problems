#include <stdio.h>

int main() {
int n, i, j, sum, total = 0;
 printf("Enter limit: ");
scanf("%d", &n);
for(i = 1; i <= n; i++) {
sum = 0;
for(j = 1; j <= i/2; j++) {
if(i % j == 0) {
sum = sum + j;
}
}
if(sum == i) {
total = total + i;
}
}
printf("Sum of perfect numbers up to %d = %d", n, total);

    return 0;
}
