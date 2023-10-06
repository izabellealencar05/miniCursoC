//Crie um programa que receba valores do usuário para preencher uma matriz 3x3,
//e em seguida, exiba a soma dos valores dela e a soma dos valores da primeira diagonal,ou seja, diagonal principal.
#include <stdio.h>
int main(){
    int matriz[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);

    }
    printf("\n");
}
    int diagonal = matriz[0][0] + matriz[1][1] + matriz[2][2];
    int soma = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][1] + matriz[1][2] + matriz[2][0] + matriz[2][1] + matriz[2][2];

    printf("\nsoma dos valores da matriz: %d ", soma);
    printf("\nsoma da diagonal principal: %d", diagonal);
}


