#include <stdio.h>
#include <string.h> // Indispensable pour strlen

void miroir(char *src, char *dest) {
    int longueur = strlen(src);
    int j = 0; // Indice pour remplir dest

for (int i = longueur -1; i >=0; i--){
	dest[j] = src[i];
	j++;
}    // Écris ici ta boucle for ou while pour lire src de la fin vers le début
    // N'oublie pas de fermer dest avec '\0'
dest[j] = '\0';

}

int main(void) {
    char source[] = "polycopie";
    char destination[100]; 

    miroir(source, destination);

    printf("Original : %s\n", source);
    printf("Miroir   : %s\n", destination);

    return 0;
}
