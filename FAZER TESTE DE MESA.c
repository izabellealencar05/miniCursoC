//Fazer um programa que solicite 2 números e informe:
//a) A soma dos números;
//b) O produto do primeiro número pelo quadrado do segundo;
//c) O quadrado do primeiro número;
//d) O módulo do primeiro número.
#include <stdio.h>
int main(){
    int x, y;
    printf("digite um numero: ");
    scanf("%d", &x);
    printf("digite um numero: ");
    scanf("%d", &y);

    int soma = x + y;
    int produto = x*(y*y);
    int quadrado = x*x;

    printf("\na soma e: %d", soma);
    printf("\no produto do primeiro numero pelo quadrado do segundo e: %d ", produto);
    printf("\no quadrado do primeiro numero e: %d ", quadrado);

    if (x < 0) {
        printf("\no modulo do primeiro numero e: %d",x*(-1));
    } else {
        printf("\no modulo do primeiro numero e: %d", x);
    }
    return 0;
}
