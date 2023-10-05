#include <stdio.h>

int primo(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int x, y;
    printf("digite dois numeros: ");
    scanf("%d %d", &x, &y);

    int soma = x + y;
    printf("a soma dos dois numeros e: %d\n", soma);

    int countPrimos = 0;
    for (int i = x; i <= y; i++) {
        if (primo(i)) {
            countPrimos++;
        }
    }

    printf("Entre %d e %d, existem %d numeros primos.\n", x, y, countPrimos);

    return 0;
}
