#include <stdio.h>

void ajouter_entiers(void){
int a = 0;
int b =00;
printf("entrer 2 chiffres\n");
scanf("%d",&a);
scanf("%d",&b);
int c = a *b;
printf("%d\n",c);

}

void ajouter_flottants(void){
float a = 0;
float b =0;
printf("entrer 2 chiffres a virgules\n");
scanf("%f",&a);
scanf("%f", &b);
float c = a*b;
printf("%f\n ", c);
}


void exercice1( void )
{
ajouter_entiers();
ajouter_flottants();
}
void exercice2( void )
{

}
int main( int/*argc*/, char** /*argv*/ )
{
exercice1();
exercice2();
return 0;
}
