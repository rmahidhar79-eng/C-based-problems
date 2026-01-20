#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Even position letters: ");
    for(i = 1; str[i] != '\0'; i += 2) {
        printf("%c ", str[i]);
    }

    return 0;
}
