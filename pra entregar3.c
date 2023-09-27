//Faça um algoritmo que leia dois números inteiros e mostre o
//resultado da multiplicação entre eles, se ambos forem positivos;
//ou a soma, se pelo menos um deles for negativo.

#include <stdio.h>

int main(){
    int x;
    int y;

  printf("digite um numero: ");
  scanf("%d %d", &x, &y);
    int mult = x * y;
    int soma = x + y;
  if(x >= 0 && y >= 0){
    printf("a multiplicacao entre eles e: %d", mult);
  }else {
    printf("a soma entre eles e: %d", soma);
  }
}




