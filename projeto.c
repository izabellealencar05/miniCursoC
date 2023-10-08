#include <stdio.h>
#include <string.h>
#define MAX 15

struct Conta {
    int num;
    char nome[50];
    float saldo;
};

int cadastrar(struct Conta contas[], int *tam, int num, char nome[], float saldo) {
    for (int i = 0; i < *tam; i++) {
        if (contas[i].num == num) {
            printf("Conta já existe. Digite outro número de conta.\n");
            return 1;
        }
    }

    if (*tam < MAX) {
        contas[*tam].num = num;
        strcpy(contas[*tam].nome, nome);
        contas[*tam].saldo = saldo;
        (*tam)++;
        printf("Conta cadastrada com sucesso!\n");
        return 2;
    } else {
        printf("Só pode haver 15 contas cadastradas!\n");
        return 3;
    }
}

void visualizar(struct Conta conta) {
    printf("\nDono da conta: %s", conta.nome);
    printf("\nNúmero da conta: %d", conta.num);
    printf("\nSaldo disponível: %.2f\n", conta.saldo);
}

void excluirMenorSaldo(struct Conta contas[], int *tam) {
    if (*tam == 0) {
        printf("Nenhuma conta cadastrada para excluir.\n");
        return;
    }

    int indiceMenorSaldo = 0;

    for (int i = 1; i < *tam; i++) {
        if (contas[i].saldo < contas[indiceMenorSaldo].saldo) {
            indiceMenorSaldo = i;
        }
    }

    for (int i = indiceMenorSaldo; i < *tam - 1; i++) {
        contas[i] = contas[i + 1];
    }

    (*tam)--;
    printf("Conta com o menor saldo excluída com sucesso.\n");
}


int main() {
    struct Conta contas[MAX];
    int tam = 0;

    printf("\n==========================MENU========================");
    printf("\n 1 - CADASTRAR CONTAS                                  ");
    printf("\n 2 - VISUALIZAR TODAS AS CONTAS DE DETERMINADO CLIENTE ");
    printf("\n 3 - EXCLUIR A CONTA COM MENOR SALDO                   ");
    printf("\n 4 - SAIR                                              ");
    printf("\n=======================================================");

    int opcao;
    while (1) {
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                int num;
                char nome[50];
                float saldo;

                printf("\nCADASTRAR NOVA CONTA\n");
                printf("\nEscreva o nome: ");
                scanf("%s", nome);
                printf("\nEscreva o número da conta: ");
                scanf("%d", &num);
                printf("Escreva o saldo: ");
                scanf("%f", &saldo);

                int resultado = cadastrar(contas, &tam, num, nome, saldo);
                if (resultado == 1) {
                    continue;
                } else if (resultado == 3) {
                    return 0;
                }
                break;

            case 2:
                printf("\nDigite o nome do cliente para visualizar as contas: ");
                char nomeCliente[50];
                scanf("%s", nomeCliente);

                printf("\nContas de %s:\n", nomeCliente);
                int contaEncontrada = 0;

                for (int i = 0; i < tam; i++) {
                    if (strcmp(contas[i].nome, nomeCliente) == 0) {
                        visualizar(contas[i]);
                        contaEncontrada = 1;
                    }
                }

                if (!contaEncontrada) {
                    printf("A conta de %s foi excluida!\n", nomeCliente);
                }
                break;

            case 3:
                printf("\nEXCLUINDO A CONTA COM MENOR SALDO\n");
                excluirMenorSaldo(contas, &tam);
                break;

            case 4:
                printf("\nSAINDO DO PROGRAMA\n");
                return 0;

            default:
                printf("\nOPÇÃO INVÁLIDA! TENTE NOVAMENTE\n");
                continue;
        }
    }

    return 0;
}
