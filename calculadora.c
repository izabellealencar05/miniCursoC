#include <stdio.h>

float soma(float x, float y) {
    return x + y;
}

float sub(float x, float y) {
    return x - y;
}

float mult(float x, float y) {
    return x * y;
}

float div(float x, float y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("erro");
        return 0;
    }
}

int main() {
    float x, y;
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
    scanf("%f", &x);
    printf("\ndigite outro numero: ");
    scanf("%f", &y);

    switch (opc) {
        case 1:
            printf("a soma e: %.2f\n", soma(x, y));
            break;
        case 2:
            printf("a subtracao e: %.2f\n", sub(x, y));
            break;
        case 3:
            printf("a multiplicacao e: %.2f\n", mult(x, y));
            break;
        case 4:
            printf("a divisao e: %.2f\n", div(x, y));
            break;
        default:
            printf("opcao invalida!\n");
            break;
    }

    return 0;
}
