#include <stdio.h>
#include <string.h>		// Indispensable pour strlen
#include <ctype.h>		// pour toupper

void miroir(char *src, char *dest)
{

	int longueur = strlen(src);

	for (int i = 0; i < longueur; i++) {
		dest[0 + i] = src[longueur - 1 - i];

	}

	dest[longueur] = '\0';

}

void majuscule(char *src, char *dest)

{
int i = 0;
	while ( src[i] != 0) {
		dest[i] = toupper(src[i]);
		i++;
	}
	dest[i] = '\0';
}

int main(void)
{
	char *source = "polycopie";

	char destination[100];
	//char storagearg2[100];
	// miroir(source, destination);
	// miroir("avril", destination);
	// miroir("argument1", storagearg2);

	majuscule(source, destination);

	printf("Original : %s\n", source);
	printf("Miroir   : %s\n", destination);

	return 0;
}
