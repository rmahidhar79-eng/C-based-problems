#include <stdio.h>
int main() {
int i,n;int arr[100];
printf("number of elements:");
scanf("%d",&n);
int count=0;
printf("array  of elements:");
for(i=0;i<n;i++){
scanf("%d",&arr[i]);}
for(i=0;i<n;i++){
    if(arr[i]%2==0){
    count++;}}
printf("%d",count);
    return 0;
}