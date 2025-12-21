#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if (((ch>='A')&&(ch<='Z')) || ((ch>='a')&&(ch<='z')))
    printf("alphabet");
    else if ((ch<='9')&&(ch>='0'))
    printf("digit");
    else
    printf("special character");
    return 0;
}