#include <stdio.h> // biblioteca de fun��es

int main(void) { // retorna valor do c�digo

int metros;
float mili, deci, centi;


  printf("Digite o seu valor em metros\n");
    scanf("%d", &metros);


    deci=(metros*10);

    centi=(metros*100);

     mili=(metros*1000);

        printf("Seu resultado e %2.f em decimetros\n %2.f em centimetros\n %2.f em milimetros\n", deci, centi, mili);



 return 0;

}
