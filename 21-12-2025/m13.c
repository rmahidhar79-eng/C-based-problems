#include <stdio.h>
int main() {
int billamount;
scanf("%d",&billamount);
float finalbill;
if (billamount>=5000)
finalbill=billamount-(billamount*10/100);
else
finalbill=billamount-(billamount*5/100);
printf("%.2f",finalbill);

    
    return 0;
}