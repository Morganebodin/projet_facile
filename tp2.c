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
while (1){
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

int main(void)
{

	//      exercice1();
	exercice2();
	return 0;
}
