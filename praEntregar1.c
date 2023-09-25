#include <stdio.h>
//Receba um valor em Real (R$) (float) e mostre a conversão para Dólar(5 R$) e Euro(5.2 R$).
//Faça junto o teste de mesa da questão.


int main() {
    float real;
    char escolha;

    printf("digite um valor: ");
    scanf("%f", &real);
    printf("voce quer transformar para Dolar (D/d) ou Euro (E/e)? ");
    scanf("%s", &escolha);
    
    if (escolha == 'D'|| escolha == 'd'){
        printf("a conversao de real para dolar fica: %.2f\n", real * 5);
    }else if(escolha == 'E' || escolha == 'e'){
        printf("a conversao de real para euro fica: %.2f\n", real * 5.2);
    }else{
        printf("nao existe essa opcao");
        }
    return 0;
}

