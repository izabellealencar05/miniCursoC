//Faça um programa que descubra o determinante de uma matriz 3x3:
#include <stdio.h>
int main(){
    int matriz[3][3];
    int i, j;
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ",i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    int det = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) -
    (matriz[0][2] * matriz[1][1] * matriz[2][0]) - (matriz[0][0] * matriz[1][2] * matriz[2][1]) - (matriz[0][1] * matriz[1][0] * matriz[2][2]);

    printf("%d", det);
}
