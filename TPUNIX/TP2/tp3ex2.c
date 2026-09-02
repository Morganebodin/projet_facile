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
	while (src[i] != 0) {
		dest[i] = toupper(src[i]);
		i++;
	}
	dest[i] = '\0';
}

void initnbJours(int *jours)
{
	for (int i = 1; i <= 12; i++) {
		if (i == 2) {
			jours[2] = 28;
		}

		else if ((i % 2 == 0 && i < 7) || (i % 2 != 0 && i > 7)) {
			jours[i] = 30;
		} else {
			jours[i] = 31;
		}
	}
}

void printnbJours(int *jours)
{
	for (int i = 1; i <= 12; i++) {
		printf("Mois %d : %djours\n", i, jours[i]);
	}
}

void exercice4(void)
{
	int nbJours[13] = { 0 };
	int *ptr = nbJours;
	initnbJours(ptr);
	printnbJours(ptr);
}

int estPrefix(char *prefix, char *s)
{
	int i = 0;

	while (prefix[i] != '\0') {
		if (prefix[i] != s[i]) {
			return 1; } 
	else {
			i++; }

	}
	return 0;

}

void exercice5(void) {
	char* p1 = "poly";
	char* mot1 = "polycopie";
	char* mot2 = "pomme";


printf( "Test 'poly' dans 'polycop': %d\n", estPrefix(p1, mot1)) ;

printf( "Test 'poly' dans 'pomme': %d\n", estPrefix(p1, mot2)) ;
}



int main(void)
{
	char *source = "polycopie";

	char destination[100];
	//char storagearg2[100];
	// miroir(source, destination);
	// miroir("avril", destination);
	// miroir("argument1", storagearg2);
	//      majuscule(source, destination);
	// exercice4();
	exercice5();

	printf("Original : %s\n", source);
	printf("Miroir   : %s\n", destination);

	return 0;
}
