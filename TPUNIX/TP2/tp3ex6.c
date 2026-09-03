#include <stdio.h>

int estContenu(char* element, char* s){

int i = 0;

while (s[i] != '\0'){
    int j = 0;
    while (element[j] != '\0' && element[j] == s[i+j]){
    j++;
    }

    if (element[j] == '\0'){
    return 0;
    }
    i++;
}
    return 1;
}

int main(void) {
    char* s = "polycopie";
    char* e1 = "copie";
    char* e2 = "avion";

    printf("Test 'copie' dans 'polycopie' : %d\n", estContenu(e1, s)); // Affiche 0 (succès)[cite: 1]
    printf("Test 'avion' dans 'polycopie' : %d\n", estContenu(e2, s)); // Affiche 1 (échec)[cite: 1]

    return 0;
}