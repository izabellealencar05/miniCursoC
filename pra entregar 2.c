//O professor aplicou a avaliação em sua turma e deseja mostrar se o aluno foi aprovado (nota maior ou igual a 5) 
//ou reprovado(nota menor que 5). Desenvolva o programa que leia a nota do aluno e gere a tela de saída com
//as informações solicitadas. Faça o teste de mesa do código

#include <stdio.h>

int main(){
    float nota;

    printf("digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 5 && nota <= 10){
        printf("voce foi aprovado!");
    } else if (nota < 5 && nota >= 0){
        printf("voce reprovou");
    } else{
        printf("nota invalida");
    }
}
