#include <stdio.h>
int main() {
int i,n,key,arr[100], found = 0;
scanf("%d",&n);

for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

scanf("%d",&key);

for(i=0;i<n;i++){
    if(arr[i]==key){
        found =1;
        break;
    }
    }
    if(found == 1)
    printf("element position %d",i+1);
    else
    printf("Not found");

    return 0;
}