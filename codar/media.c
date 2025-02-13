#include <stdio.h>

int main () {
    int idade, matricula;
    float altura;
    char nome[20];

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    printf("Digite sua Matrícula: ");
    scanf("%d", &matricula);

    printf("Digite sua Altura: ");
    scanf("%f", &altura);

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Nome do Aluno: %s\n", nome);
    printf("Matricula do Aluno: %d\n", matricula);
    printf("Idade do Aluno: %d\n", idade);
    printf("Altura do Aluno: %.2f", altura);

    return 0;
}