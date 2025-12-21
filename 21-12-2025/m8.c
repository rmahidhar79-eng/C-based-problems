#include <stdio.h>
int main() {
    float percentage;
    scanf("%f",&percentage);
    if ((percentage>=75)&&(percentage<=100))
    printf("allowed");
    else
    printf("not allowed");
    return 0;
}