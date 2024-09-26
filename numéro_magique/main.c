#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombreMystere, proposition, tentatives = 0;
    
    srand(time(NULL));
    nombreMystere = rand() % 100 + 1;

    printf("Bienvenue dans le jeu du Numéro Magique !\n");
    printf("Devinez le nombre entre 1 et 100 :\n");

    do {
        printf("Votre proposition : ");
        scanf("%d", &proposition);
        tentatives++;

        if (proposition < nombreMystere) {
            printf("C'est plus grand !\n");
        } else if (proposition > nombreMystere) {
            printf("C'est plus petit !\n");
        } else {
            printf("Bravo !  Vous avez trouvé le nombre  %d en %d tentatives.\n", nombreMystere, tentatives);
        }
    } while (proposition != nombreMystere);

    return 0;
}
