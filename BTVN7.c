#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[] = "Hello my gmail is test123@gmail.com";
    int letters = 0, digits = 0, specials = 0;
    int i;
    int len = strlen(s); // luu d? dài chu?i 1 l?n

    for (i = 0; i < len; i++) {  // i dã khai báo tru?c
        char ch = s[i];

        if (isalpha(ch))
            letters++;
        else if (isdigit(ch))
            digits++;
        else if (ch != ' ')  // ký t? d?c bi?t (không ph?i ch? cái, s?, kho?ng tr?ng)
            specials++;
    }

    printf("So ky tu la chu cai: %d\n", letters);
    printf("So ky tu la chu so: %d\n", digits);
    printf("So ky tu dac biet: %d\n", specials);

    return 0;
}

