#include <stdio.h>

int main()
{
    char nome[30];
    float valor, desconto, vista;
    printf("Digite o nome do produto: \n");
    fgets(nome, 30, stdin);
    printf("Digite o preco do produto: \n");
    scanf("%f", &valor);
  
    desconto = valor * 0.1;
    vista = valor - desconto;
  
    printf("Produto: %s\n", nome);
    printf("Valor: %.2f\n", valor);
    printf("O desconto eh: %.2f\n", desconto);
    printf("Valor a vista: %.2f\n", vista);
  
  return 0;
}