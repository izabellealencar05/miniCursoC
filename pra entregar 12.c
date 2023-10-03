//Elabore um algoritmo que preencha duas matrizes 3×3 com valores e em seguida,
//determine se as matrizes são iguais (possuem os mesmos valores em cada posição)
#include <stdio.h>
int main(){
    int mat1[3][3];
    int i, j;

    printf("\npreencha a primeira matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("mat1[%d][%d] = ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", mat1[i][j]);
        }
        printf("\n");
    }
    int mat2[3][3];
    printf("\npreenchendo a segunda matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("mat2[%d][%d] = ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
        printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }

   int iguais(int mat1[3][3], int mat2[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0;
            }
        }
    }
    return 1;
   }

    if (iguais(mat1, mat2)) {
        printf("as matrizes sao iguais\n");
    } else {
        printf("as matrizes nao sao iguais\n");
    }
}
