// Faça um programa para o usuário calcular a área de um quadrado. Lembre-se: Área = lado*lado.

#include <stdio.h>

main(){

  float lado, area;

  printf("Digite o valor de um dos lados: ");
    scanf("%f", &lado);
  
  area = lado * lado;

    printf("Área = %4.2f", area);
  
}