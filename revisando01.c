//As maçãs custam R$ 0,30 cada se forem compradas menos do que uma dúzia, e R$
//0,25 se forem compradas pelo menos doze. Escreva um programa que leia o número de
//maçãs compradas, calcule e escreva o valor total da compra.

#include <stdio.h>
int main(){
    int qntd;
    printf("quantas macas foram compradas? ");
    scanf("%d", &qntd);

    if (qntd < 12){
        printf("o preco a ser pago e: %.2f", 0.30 * qntd);
    } else if(qntd >= 12){
        printf("o preco a ser pago e: %.2f", 0.25 * qntd);
    } else{
        printf("invalido");
    }
    return 0;
}
