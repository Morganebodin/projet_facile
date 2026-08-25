#include <stdio.h>
void exercice1(void)
{
	int nombre = 0;
	int maximum = 0;
	printf("entrer un nombre:\n");
	scanf("%d", &nombre);
	maximum = nombre;
	while (nombre != 0) {
		printf("entrer un nouveau nombre\n");
		scanf("%d", &nombre);
		if (nombre > maximum) {
			maximum = nombre;
		}
	}

	printf("le chiffre est: %d\n", maximum);

	return;			//ligne optionnelle
}

void exercice2(void)
{
	int numb1 = 0;
	int numb2 = 0;
	char operateur = 0;
	while (1) {
		printf("demander une opération:\n");
		scanf("%d %c %d", &numb1, &operateur, &numb2);
		switch (operateur) {
		case '+':
			printf("calcul =%d\n", numb1 + numb2);
			break;
		case '-':
			printf("calcul =%d\n", numb1 - numb2);
			break;
		case '*':
			printf("calcul=%d\n", numb1 * numb2);
			break;
		case '/':
			printf("calcul=%d\n", numb1 / numb2);
			break;
		case '%':
			printf("calcul=%d\n", numb1 % numb2);
			break;

		}
	}

}

void exercice3(void)
{

	int numb1 = 0;
	int numb2 = 0;
	char operateur = 0;
	while (1) {
		printf("demander une opération:\n");
		scanf("%d %c %d", &numb1, &operateur, &numb2);
		switch (operateur) {
		case '|':
			printf("calcul =%d %x\n", (unsigned int)(numb1 | numb2),
			       (unsigned int)(numb1 | numb2));
			break;
		case '^':
			printf("calcul =%d %x\n", (unsigned int)(numb1 ^ numb2),
			       (unsigned int)(numb1 ^ numb2));
			break;
		case '&':
			printf("calcul=%d %x\n", (unsigned int)(numb1 & numb2),
			       (unsigned int)(numb1 & numb2));
			break;
		case '~':
			printf("calcul=%d %x\n", (unsigned int)(~numb1),
			       (unsigned int)(~numb1));
			break;
		case '!':
			printf("calcul=%d %x\n", (unsigned int)(!numb1),
			       (unsigned int)(!numb1));
			break;

		}

	}
}

int heure = 0;
int minute = 0;
int seconde = 0;
void afficheTemps(void)
{
	printf("il est %d heure(s) %d minute(s) %dseconde(s)\n", heure, minute,
	       seconde);

}

void saisirTemps(int h, int m, int s)
{
	heure = h;
	minute = m;
	seconde = s;
}

void tick(void)
{
	seconde = seconde + 1;
	if (seconde >= 60) {
		seconde = 0;
		minute++;
		if (minute >= 60) {
			minute = 0;
			heure++;
			if (heure >= 24) {
				heure = 0;
			}

		}

	}
}

void exercice4(void)
{
	afficheTemps();
	saisirTemps(23, 59, 50);
	afficheTemps();
	tick();
	afficheTemps();

	tick();
	afficheTemps();

	tick();
	afficheTemps();

	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
	tick();
	afficheTemps();
}

int main(void)
{

	//      exercice1();
	//      exercice2();
//      exercice3();
	exercice4();
	return 0;
}
