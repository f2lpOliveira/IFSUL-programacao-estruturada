// Faça um programa para o usuário calcular um aumento de 20% no seu salário.

#include <stdio.h>

main(){

  float salario, aumento = 0.2, novoSalario;
 
  printf("Informe o valdor do seu salário: R$");
    scanf("%f", &salario);

  novoSalario = salario + (salario * aumento);

  printf("Seu novo salário corresponde a: R$ = %6.2f", novoSalario);
  
}