#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[] = "Hello, World! 123";
    int count = 0;
    int i;

    // In chu?i và d?m ký t? ch? cái
    for (i = 0; i < strlen(s); i++) {
        printf("%c", s[i]);
        if (i < strlen(s) - 1)
            printf(" ");

        if (isalpha(s[i])) {
            count++;
        }
    }

    printf("\nSo ky tu la chu cai: %d\n", count);
    return 0;
}

