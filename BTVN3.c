#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;

    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("Chuoi: %s\n", s);
    printf("Chuoi dao nguoc: ");

    for (i = strlen(s) - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");
    return 0;
}

    

