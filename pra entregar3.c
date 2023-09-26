//faça um algoritmo que leia dois números inteiros e mostre o resultado
//da multiplicação entre eles, se ambos forem positivos; ou a soma, se
//pelo menos um deles for negativo. Faça o teste de mesa do código.
#include <stdio.h>

int main(){
    int x;
    int y;

    printf("digite um numero: ");
    scanf("%d", &x);
    printf("digite outro numero: ");
    scanf("%d", &y);

    int soma = x + y;
    int mult = x * y;
    if(x >= 0 && y >= 0){
        printf("o resultado da multiplicacao e: %d", mult);
    }else{
        printf("o resultado da soma e: %d", soma);
    }
}
