//Faça um programa para imprimir todo o alfabeto(A-Z)
//(maiúscula)  usando repetição (while) e a tabela ASCII
//(Tabela ASCII (up.pt)).
#include <stdio.h>

int main() {
    int opcao;
    printf("======================MENU========================\n");
    printf("1 - ALFABETO NORMAL\n");
    printf("2 - TABELA ASCII DE LETRAS MAIUSCULAS\n");
    printf("3 - TABELA ASCII DE LETRAS MINUSCULAS\n");
    printf("4 - TABELA ASCII DE NUMEROS E CARACTERES ESPECIAIS\n");
    printf("5 - TABELA ASCII DE EMOJIS\n");
    printf("==================================================\n");
    printf("\nescolha uma opcao: ");
    scanf("%d", &opcao);


    switch (opcao){
        case 1:
            printf("\n--------ALFABETO NORMAL--------\n");
            for (char letra = 'A'; letra <= 'Z'; letra++) {
            printf(" %c\n", letra);
    }
        break;

        case 2:
            printf("\n----------TABELA ASCII (letras maiusculas)----------\n");
            for(int i = 65; i <= 90; i++){
            printf("%d = %c\n", i, i);
    }
        break;

        case 3:
            printf("\n----------TABELA ASCII (letras minusculas)-------------\n");
            for(int i = 97; i <= 122; i++){
            printf("%d = %c\n", i, i);
    }
        break;

        case 4:
            printf("\n-------------TABELA ASCII (numeros/caracteres especiais)\n");
            for(int i = 33; i <= 64; i++){
            printf("%d = %c\n", i, i);
    }
        break;

        case 5:
            printf("\n--------------TABELA ASCII (emojis fofinhos)-----------------\n");
            for(int i = 1; i <= 6; i++){
            printf("%d = %c\n", i, i);
    }
        break;
    }
            return 0;
}


