// Faça um programa capaz de ler um caracter e um número inteiro do teclado. Após a leitura
// apresente-os na tela do computador.

#include <stdio.h>

main(){

  char letra;
  int numero;

  printf("Digite uma letra: ");
  scanf("%c", &letra); 
  printf("Digite um número inteiro: ");
  scanf("%d", &numero);

  printf("Letra = %c\nNúmero = %d", letra, numero);
}