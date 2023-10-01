#include <stdio.h>

int main() {
    int n;

    printf("escolha o tamanho dos vetores (os dois vao ser o mesmo tamanho): ");
    scanf("%d", &n);

    int v1[n], v2[n], resultado[n];

    printf("\ndigite os valores do primeiro vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("digite um valor: ");
        scanf("%d", &v1[i]);
    }

    printf("\ndigite os valores do segundo vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("digite um valor: ");
        scanf("%d", &v2[i]);
    }

    for (int i = 0; i < n; i++) {
        resultado[i] = v1[i] + v2[i];
    }

    printf("\nvetor resultado da soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }

    for (int i = 0; i < n; i++) {
        resultado[i] = v1[i] - v2[i];
    }

    printf("\nvetor resultado da subtração:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", resultado[i]);
    }

    return 0;
}
