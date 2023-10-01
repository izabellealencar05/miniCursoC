//Faça um programa que receba N números inteiros,
//e todos os números menores ou igual a 0 passem a ser 1

#include <stdio.h>

int main(){
    int n;
    
    printf("quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int x;
        printf("\ndigite o numero: ");
        scanf("%d", &x);

        if (x <= 0){
            x = 1;
        }
        printf("%d", x);
    }
    return 0;
}



