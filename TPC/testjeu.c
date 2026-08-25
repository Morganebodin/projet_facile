#include <stdio.h>

int main() {
    int temperature = 0;

    printf("Donne la temperature : ");
    scanf("%d", &temperature);

    if (temperature >= 100) {
        printf("L'eau bout !\n");
    } else {
        printf("L'eau ne bout pas.\n");
    }

    return 0;
}
