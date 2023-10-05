//Escreva uma função que receba dois números inteiros retorne o menor número.
#include <stdio.h>
int inteiros(int x, int y){
    if (x < y){
        return x;
    } else{
        return y;
    }
}
int main(){
    int x, y;
    printf("escreva um valor: ");
    scanf("%d", &x);
    printf("escreva outro valor: ");
    scanf("%d", &y);

    int menor = inteiros(x, y);
    printf("o menor numero e: %d",menor);
    return 0;
}
