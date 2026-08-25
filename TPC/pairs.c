#include <stdio.h>

int main() {
    int compteur = 1;

    while (compteur <= 20) {
        if (compteur % 2 == 0) {
            printf("Nombre pair : %d\n", compteur);
        }
        compteur++; // S'exécute à chaque tour pour passer au nombre suivant
    }

    return 0;
}
