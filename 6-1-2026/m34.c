#include <stdio.h>
int main() {
int n,i;
printf("number of elements;");
scanf("%d",&n);
int min;
int arr[100];
printf("array of elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
min=arr[0];
for(i=1;i<n;i++){
if(arr[i]<min){
min=arr[i];}
}
printf("%d",min);
    return 0;
}