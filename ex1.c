#include <stdio.h>

void ajouter_entiers(void){
int a = 0;
int b = 0;
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
int a =0;
int b =0;
int c =0;
int x = 0;
printf("entrer 3 entiers\n");
scanf("%d",&a);
scanf("%d", &b);
scanf("%d", &c);
  if(a > b){
x = a; // x vaut 6
a = b; // a vaut 5
b = x; // b vaut 6
}

  if(b > c){
x = b; // x vaut 6
b = c; // b vaut 4
c = x; // c vaut 6
}

if(a > b){
x = a; // x vaut 5
a = b; // a vaut 4
b = x; // b vaut 5
}

printf("a= %d, b= %d, c= %d\n",a,b,c);

}
int main( int/*argc*/, char** /*argv*/ )
{
//exercice1();
exercice2();
return 0;
}
