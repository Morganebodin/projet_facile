#include <stdio.h>

int main() {
    int secret = 7;
    int essai = 0;

    printf("--- Jeu du Nombre Mystere ---\n");
    printf("Devine le nombre entre 1 et 10 : ");

    // scanf lit ce que tu tapes au clavier et le stocke dans 'essai'
    scanf("%d", &essai);

    if (essai == secret) {
        printf("Gagne ! Tu as trouve le bon nombre.\n");
    } else {
        printf("Perdu... Le nombre secret etait %d.\n", secret);
    }

    return 0;
}
