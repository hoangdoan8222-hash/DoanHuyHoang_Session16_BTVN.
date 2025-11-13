#include <stdio.h>
#include <ctype.h>  // Cho toupper(), isalpha()

int main() {
    char s[] = "hello world"; // chu?i b?t k?
    int i;

    // Vi?t hoa ch? cái d?u c?a chu?i
    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 && isalpha(s[i])) {
            // Vi?t hoa ký t? d?u tiên n?u là ch? cái
            s[i] = toupper(s[i]);
        } else if (s[i-1] == ' ' && isalpha(s[i])) {
            // Vi?t hoa ký t? sau kho?ng tr?ng n?u là ch? cái
            s[i] = toupper(s[i]);
        }
    }

    printf("%s\n", s);

    return 0;
}

