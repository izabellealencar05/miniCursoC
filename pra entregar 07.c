//O professor aplicou a avaliação em sua turma e deseja selecionar a maior nota e
//sua respectiva frequência, ou seja, a quantidade de alunos que conseguiu a maior
//nota. Desenvolva o programa que leia a nota dos alunos e gere a tela de saída com as informações solicitadas.
#include <stdio.h>
int main(){
    int alunos;

    printf("quantos alunos sao? ");
    scanf("%d", &alunos);
    int maior = 0;
    int frequencia = 0;
    for(int i = 1  ; i <= alunos; i++){
        int nota;

        printf("\ndigite a nota do aluno: ", i);
        scanf("%d", &nota);

        if(nota > maior){
            maior = nota;
            frequencia = 1;
            printf("%d", frequencia);
        } else if(nota == maior){
            frequencia++;
        }
    }
    printf("\na maior nota e: %d", maior);
    printf("\na frequencia e: %d", frequencia);
    return 0;
}
