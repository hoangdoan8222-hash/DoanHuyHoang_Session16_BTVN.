#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Nhap chuoi: ");
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Loi hoac EOF\n");
        return 0;
    }
    s[strcspn(s, "\r\n")] = '\0';
    printf("Chuoi: %s\nDo dai: %lu\n", s, strlen(s));
    return 0;
}

