#include <stdio.h>
int main() {
  int num;
  scanf("%d",&num);
  if ((num<=9)&&(num>=-9)){
  printf("Single digit");}
  else{
  printf("Not single digit");}
    return 0;
}