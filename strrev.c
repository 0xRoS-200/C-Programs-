#include <stdio.h>
int main() {
    char s[50], temp;
    int i, j;

    gets(s);
    for(j=0; s[j]!='\0'; j++);
    j--;

    for(i=0;i<j;i++,j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    puts(s);
    return 0;
}
