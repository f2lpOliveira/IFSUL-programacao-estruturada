// Faça um programa em linguagem C que contenha uma variável inteira e outra do tipo real. O
// programa deve solicitar ao usuário que digite um valor para cada umas das variáveis e apresentar os
// valores na tela.

#include <stdio.h>

main(){

  int x;
  float y;

  printf("Digíte um inteiro: ");
    scanf("%d", &x);
  printf("Digíte um real: ");
    scanf("%f", &y);
  
   printf("X = %d -- Y = %5.3f", x, y);
  
}