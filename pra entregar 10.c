//Escrever um programa que solicita ao usuário um conjunto
//de 4 valores reais e verifica quantos estão acima da média(dois casa decimal).
#include <stdio.h>

int main() {
    float valores[4];
    printf("digite os valores: ");

    for (int i = 0; i < 4; i++){
        scanf("%f", &valores[i]);
    }
    float soma = 0;
    for (int i = 0; i < 4; i++){
        soma += valores[i];
    }

    float media = soma / 4;
    int acima = 0;

    for (int i = 0; i < 4; i++){
        if (valores[i] > media){
            printf("o valor %.2f esta acima da media\n", valores[i]);
            acima++;
        } else{
            printf("o valor %.2f nao esta acima da media\n", valores[i]);
        }
    }
    printf("sao %d que estao acima da media %.2f", acima, media);

    return 0;
}
