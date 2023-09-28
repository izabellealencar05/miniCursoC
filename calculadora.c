//Faça uma calculadora que receba números inteiros e posteriormente a
//operação a ser feita com esses número e então retorne o resultado.
#include <stdio.h>
int soma (int x, int y){
    return x + y;
}
int sub (int x, int y){
    return y - x;
}
int mult (int x, int y){
    return x * y;
}
int div (int x, int y){
    return x/y;
}
int main(){
    float x;
    float y;
    printf("\n========================MENU=====================");
    printf("\n                1 - soma                         ");
    printf("\n                2 - subtracao                    ");
    printf("\n                3 - multiplicacao                ");
    printf("\n                4 - divisao                      ");
    printf("\n=================================================");




    int opc;
    printf("\nescolha uma opcao: ");
    scanf("%d", &opc);
    printf("\ndigite um numero: ");
    scanf("%d", &x);
    printf("\ndigite outro numero: ");
    scanf("%d", &y);

    switch(opc){
    case 1:
        printf("%f", soma(x,y));
        break;
    case 2:
        printf("%f", sub(x, y));
        break;
    case 3:
        printf("%f", mult(x, y));
        break;
    case 4:
        printf("%f", div(x,y));
        break;
    default:
        break;
    }
}
