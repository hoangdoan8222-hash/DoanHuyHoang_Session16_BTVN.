#include <stdio.h>
#include <string.h>

int main(){
	char s[100];
	char c;
	int i, count=0;

	printf("Nhap chuoi: ");
	fgets(s,sizeof(s),stdin);
	s[strcspn(s,"n")] = '\0';
	
	printf("Nhap 1 ky tu bat ky: ");
    scanf("%c", &c);
   
    for (i = 0; i < strlen(s); i++) { 	
        printf("%c", s[i]);
        if (i < strlen(s) - 1)
            printf(" ");
        if (s[i] == c)
            count++;  
    }

    printf("\nKy tu '%c' xuat hien %d lan trong chuoi.\n", c, count);

    return 0;
}
