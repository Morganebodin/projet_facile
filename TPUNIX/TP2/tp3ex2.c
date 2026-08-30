#include <stdio.h>
#include <string.h> // Indispensable pour strlen

void miroir(char *src, char *dest) {    

int longueur = strlen(src);

    for(int i = 0; i<longueur ; i++){
dest[0+i] = src [longueur -1-i];

}

dest[longueur] = '\0';

}

int main(void) {
    char* source = "polycopie";
    char destination[100];

    miroir(source, destination);

    printf("Original : %s\n", source);
    printf("Miroir   : %s\n", destination);

    return 0;
}
