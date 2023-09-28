//Faça uma função que receba um inteiro e mostre na tela se ele for múltiplo de 2.

#include <stdio.h>
int mult(int x){
        return x%2;
    }
int main(){
    int x;
    printf("digite um numero: ");
    scanf("%d", &x);
    if (mult(x) == 0){
        printf("o numero e multiplo de 2");
    } else{
        printf("o numero nao e multiplo de 2");
    }
}
