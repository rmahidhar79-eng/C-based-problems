#include <stdio.h>
int main() {
int i,n;int sum =0;
printf("no of elements");
scanf("%d",&n);
int arr[100];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
sum=sum+arr[i];}
printf("%d",sum);
    
    return 0;
}