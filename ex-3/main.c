#include <stdio.h>

int main() {
    char mot[100];

    printf("Saisait un mot de moins de 50 caractères: ");
    scanf("%s", mot);
    for (int i = 0; i < 5; i++) {
        printf("%s\n", mot);
    }

    return 0;
}
