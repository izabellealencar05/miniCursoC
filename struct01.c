//Crie uma struct chamada Pessoa com os campos "nome", "idade" e "endereço".
//O campo "endereço" deve ser uma outra struct com os campos "rua", "número", "cidade" e "estado".
//Escreva uma função que receba uma Pessoa como parâmetro e imprima seu endereço completo.
#include <stdio.h>
struct Pessoa{
    char nome[50];
    int idade;
    struct Endereco{
        char rua[100];
        int numero;
        char cidade[100];
        char estado[100];
};
};

void imprimir(struct Pessoa pessoa, struct Endereco endereco){
    printf("\nnome: %s", pessoa.nome);
    printf("\na idade: %d", pessoa.idade);
    printf("\no estado: %s", endereco.estado);
    printf("\na cidade: %s", endereco.cidade);
    printf("\na rua: %s", endereco.rua);
    printf("\no numero: %d", endereco.numero);
}

int main(){
    struct Pessoa pessoa;
    printf("qual o seu nome? ");
    scanf("%s", pessoa.nome);

    printf("qual a sua idade? ");
    scanf("%d", &pessoa.idade);

    struct Endereco endereco;
    printf("qual o seu estado? ");
    scanf("%s", endereco.estado);

    printf("qual a sua cidade? ");
    scanf("%s", endereco.cidade);

    printf("qual a sua rua? ");
    scanf("%s", endereco.rua);

    printf("qual o seu numero? ");
    scanf("%d", &endereco.numero);

    imprimir(pessoa, endereco);
    return 0;
}
