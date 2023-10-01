//Crie um programa que imprima uma tabela de conversão de graus Fahrenheit para Celsius,
//conforme um intervalo definido pelo usuário. O algoritmo em C deve solicitar ao usuário
//o limite superior do intervalo e um valor de incremento.
//Para a realização dos cálculos, considere a seguinte fórmula:
//C = (F - 32) * (5/9)
//Considere sempre o valor do limite inferior como 10.

#include <stdio.h>

int main() {
    int inferior = 10;
    int superior;
    int incremento;

    printf("qual o limite superior em Fahrenheit: ");
    scanf("%d", &superior);
    printf("qual o valor do incremento: ");
    scanf("%d", &incremento);
    printf("\n===========TABELA DE FAHRENHEIT E CELSIUS============\n");
    printf("\nFahrenheit\tCelsius\n");

    for (int fahrenheit = inferior; fahrenheit <= superior; fahrenheit += incremento){
        float celsius = (fahrenheit - 32) * 5 / 9;
        printf("%d\t = \t%.2f\n", fahrenheit, celsius);
    }
    return 0;
}
