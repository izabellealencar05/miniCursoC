//Crie uma struct chamada Aluno com os campos "nome", "idade" e "notas".
//O campo "notas" deve ser um vetor, representando as notas que o aluno tirou
//em uma determinada disciplina. Escreva funções que possam calcular a média das notas
//e imprimir o nome, idade e média do aluno.
#include <stdio.h>

struct Aluno {
    char nome[100];
    int idade;
    float notas[100];
};

int main() {
    int n;

    printf("quantas notas quer colocar? ");
    scanf("%d", &n);

    struct Aluno aluno;
    float soma = 0.0;

    printf("digite o nome do aluno: ");
    scanf("%s", aluno.nome);

    printf("digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    for (int i = 0; i < n; i++) {
        printf("digite a nota %d: ", i + 1);
        scanf("%f", &aluno.notas[i]);
        soma += aluno.notas[i];
    }

    float media = soma / n;
    printf("\ndados do aluno:\n");
    printf("nome: %s\n", aluno.nome);
    printf("idade: %d\n", aluno.idade);
    printf("média das notas: %.2f\n", media);

    return 0;
}
