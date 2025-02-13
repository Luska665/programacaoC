#include <stdio.h>

int main () {
    int idade;
    float altura;
    char opcao;
    char nome[26];

    printf("Entre com sua Idade: \n");
    scanf("%d", &idade);
    printf("Idade: %d\n", idade);
    printf("Entre com sua altura: \n");
    scanf("%f", &altura);
    printf("Altura: %f\n", altura);
    printf("Entre com sua opção: \n");
    scanf(" %c", &opcao);
    printf("A opção é: %c\n", opcao);

}