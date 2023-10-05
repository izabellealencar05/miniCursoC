//Escreva um programa que verifique a validade de uma senha fornecida pelo usuário.
//A senha válida é o número 1234. Devem ser impressas as seguintes mensagens: ACESSO PERMITIDO
//caso a senha seja válida. ACESSO NEGADO caso a senha seja inválida.
#include <stdio.h>
int main(){
    int senha = 1234;
    int tentativa;


    while(tentativa != senha){
        printf("\ndigite a senha: ");
        scanf("%d", &tentativa);

    if (tentativa == senha){
        printf("\nACESSO PERMITIDO");
        break;
    }else{
        printf("\nACESSO NEGADO!\n");
        printf("TENTE NOVAMENTE\n");
    }
    }
}


