#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0;
 scanf("%d", &num);
original = num;

while(num != 0) {
remainder = num % 10;
result = result + remainder * remainder * remainder;
num = num / 10;
    }

if(result == original)
 printf("Armstrong number");
else
printf("Not an Armstrong number");

    return 0;
}
