#include <stdio.h>
int main() {
int n,i;
printf("number of elements;");
scanf("%d",&n);
int max;
int arr[100];
printf("array of elements");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
max=arr[0];
for(i=1;i<n;i++){
if(arr[i]>max){
max=arr[i];}
}
printf("%d",max);
    return 0;
}