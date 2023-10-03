//Crie uma matriz 3x3 que primeiro escaneia os números depois imprime a matriz
#include <stdio.h>
int main(){
    int matriz[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
