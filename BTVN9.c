#include <stdio.h>
#include <string.h>

int main() {
    char s[100] = "hello world";  // Chu?i dã khai báo
    char c;                        // Ký t? ngu?i dùng mu?n xóa
    int i, j;

    printf("Chuoi ban dau: %s\n", s);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &c);

    // Duyet chuoi va xoa cac ky tu trung voi c
    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if (s[i] != c) {
            s[j] = s[i]; // gi? l?i ký t? không trùng
            j++;
        }
    }
    s[j] = '\0'; // k?t thúc chu?i

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", c, s);

    return 0;
}

