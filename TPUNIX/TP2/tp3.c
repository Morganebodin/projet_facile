#include <stdio.h>
void exercice1(void)
{
	int i;			//a
	i = 12;			//b
	int *p = &i;

	printf("valeur de i=%d\n", i);	//c

	*p = 25; 	//d on modifie le contenu pointé verp (sans redéclarer int)

	printf("nouvelle valeur de i=%d\n", i);		// ajout du %d
}




int main(void)
{
	exercice1();
	//exercice2();
	return 0;	// retour 0 pout un int main

}
