#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "bcdac";     // Chu?i dã khai báo
    char chars[100];         // Luu các ký t? dã g?p
    int counts[100];         // Luu s? l?n xu?t hi?n tuong ?ng
    int len = strlen(s);
    int unique = 0;          // S? lu?ng ký t? khác nhau
    int i, j;

    for (i = 0; i < len; i++) {
        char c = s[i];
        int found = 0;

        // Ki?m tra ký t? c dã có trong m?ng chars chua
        for (j = 0; j < unique; j++) {
            if (chars[j] == c) {
                counts[j]++;  // n?u có r?i ? tang s? l?n xu?t hi?n
                found = 1;
                break;
            }
        }

        // N?u chua có ? thêm vào m?ng chars và counts
        if (!found) {
            chars[unique] = c;
            counts[unique] = 1;
            unique++;
        }
    }

    // In k?t qu?
    for (i = 0; i < unique; i++) {
        printf("%c: %d\n", chars[i], counts[i]);
    }

    return 0;
}

