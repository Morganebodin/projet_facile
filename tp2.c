#include <stdio.h>
void exercice1(void)
{
	int nombre = 0;
	int maximum =0;
	printf("entrer un nombre:\n");
	scanf("%d", &nombre);
	maximum = nombre;
	while (nombre != 0) {
		printf("entrer un nouveau nombre\n");
		scanf("%d",&nombre);
	if (nombre > maximum){
	maximum = nombre;
	}
}

	printf("le chiffre est: %d\n",maximum);

	return;			//ligne optionnelle
}

int main(void)
{

	exercice1();
	return 0;
}
