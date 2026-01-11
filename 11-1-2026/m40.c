#include <stdio.h>
int main() {
int i,n,arr[100];
int count=0;
scanf("%d", &n );
printf("enter the elements");
for(i=0; i<n; i++)
{
scanf("%d", &arr[i]);
if(arr[i]>0){
    count++;
}
}
  printf("%d",count);  
    return 0;
}