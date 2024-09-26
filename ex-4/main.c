#include <stdio.h>

int main() {
    int num;

    printf("Saisir un nombre différent de 0 : ");
    scanf("%d", &num);

    if (num == 0) {
        printf("nbr doit être différent de 0.");
        return 1;
    }

    for (int i = 0; i <= num; i++) {
        printf("%d\n", i);
    }

    return 0;
}
