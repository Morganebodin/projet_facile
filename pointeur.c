#include <stdio.h>

// Cette fonction prend l'adresse d'un entier
void ajouter_dix(int *p) {
    *p = *p + 10; // On modifie directement le contenu de la case mémoire
}

int main() {
    int score = 50;

    ajouter_dix(&score); // On donne l'adresse de 'score'

    printf("Nouveau score : %d\n", score); // Affiche : 60 !
    return 0;
}
