#include <stdio.h>

int main() {
    char s[100];
    int i;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    // Lo?i b? ký t? xu?ng dòng n?u fgets thêm vào
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
    }

    printf("Cac ky tu trong chuoi: ");
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
        if (s[i+1] != '\0') {
            printf(" "); // m?i ký t? cách nhau 1 d?u cách
        }
    }
    printf("\n");

    return 0;
}

