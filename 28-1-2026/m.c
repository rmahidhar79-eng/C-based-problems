#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;
printf("Enter a string: ");
gets(str);
printf("ASCII values in reverse order:\n");
for(i = strlen(str) - 1; i >= 0; i--) {
 printf("%d ", str[i]);
    }

    return 0;
}
