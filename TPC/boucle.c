#include <stdio.h>

int main() {
    int compteur = 1;

    while (compteur <= 5) {
        printf("Tour n°%d\n", compteur);
        compteur = compteur + 1; // On augmente la valeur de 1
    }

    return 0;
}
