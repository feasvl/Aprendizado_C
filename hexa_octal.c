#include<stdio.h>

int main() {

  float decimal, hexa, octal;

    printf("Digite seu numero decimal\n");
     scanf("%f", &decimal);

    hexa=(decimal*16);

    octal=(decimal/8);

  printf("Seu numero e %f em hexadecimal\n %f em octal\n", hexa, octal);


return 0;

}
