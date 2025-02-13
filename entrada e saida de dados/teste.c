#include <stdio.h>

int main () {
    char nome[20];
    int idade;
    float altura;

    printf("Entre com seu Nome, Idade e Altura:\n");
    scanf("%s", nome);
    scanf("%d", idade);
    scanf("%f", altura);
    printf("Nome: %s", nome);
}