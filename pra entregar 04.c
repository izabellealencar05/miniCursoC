//Nesse exercício queremos que vocês criem um programa
//que mostra a tabuada completa de um número (a ser digitado)
//e da tabuada de seus antecessores
#include <stdio.h>
int main(){
    int x;
    
    printf("digite um numero que tu queira a tabuada: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++){
        printf("----- TABUADA DO %d -----\n", i);
        for(int y = 1; y <= 10; y++){
            printf("%d X %d = %d\n", i, y, y*i);
        }
    }
    return 0;
}

