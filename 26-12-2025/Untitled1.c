#include <stdio.h>
int main() {
    int purchases,sales;
    float purchase_price,selling_price;
    float turnover;
    scanf("%d %d",&purchases,&sales);
    scanf("%f %f",&purchase_price,&selling_price);
    turnover = (purchases*purchase_price+sales*selling_price);
    printf("%.2f",turnover);
    return 0;
}