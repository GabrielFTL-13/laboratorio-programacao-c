// Questão 1 
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;


void questao1() {
    char nome[50], matricula[20];
    int qtd, i;
    FILE *arq;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &qtd);
    } while (qtd < 1 || qtd > 5);

    arq = fopen("funcionarios.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", nome);
        printf("Matricula: ");
        scanf(" %19s", matricula);

        fprintf(arq, "Nome: %s | Matricula: %s\n", nome, matricula);
    }

    fclose(arq);
    printf("\nDados gravados com sucesso em funcionarios.txt!\n");
}

// Questão 2 
void questao2() {
    int num, i;
    FILE *arq;

    arq = fopen("numeros.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }

    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &num);
        fprintf(arq, "%d\n", num);   
    }
    fclose(arq);

    arq = fopen("numeros.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return;
    }

    printf("\nNumeros armazenados no arquivo:\n");
    while (fscanf(arq, "%d", &num) == 1) {
        printf("%d\n", num);
    }
    fclose(arq);
}

// Questão 3
void questao3() {
    Funcionario f[5], lido;
    int qtd, i;
    FILE *arq;

    do {
        printf("Quantos funcionarios deseja cadastrar (1 a 5)? ");
        scanf("%d", &qtd);
    } while (qtd < 1 || qtd > 5);

    for (i = 0; i < qtd; i++) {
        printf("\nFuncionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", f[i].nome);
        printf("Salario: ");
        scanf("%f", &f[i].salario);
        printf("Horas extras: ");
        scanf("%d", &f[i].horasExtras);
    }


    arq = fopen("funcionarios_q3.txt", "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    for (i = 0; i < qtd; i++) {
        fprintf(arq, "%s;%.2f;%d\n", f[i].nome, f[i].salario, f[i].horasExtras);
    }
    fclose(arq);
    printf("\nRegistros gravados com sucesso!\n");

    arq = fopen("funcionarios_q3.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return;
    }
    printf("\n--- Funcionarios cadastrados ---\n");
    while (fscanf(arq, " %49[^;];%f;%d", lido.nome, &lido.salario, &lido.horasExtras) == 3) {
        printf("Nome: %s | Salario: R$ %.2f | Horas extras: %d\n",
               lido.nome, lido.salario, lido.horasExtras);
    }
    fclose(arq);
}

int main() {
    int op;

    do {
        printf("\n===== AULA 21 - ARQUIVOS EM C =====\n");
        printf("1 - Questao 1 (cadastro nome/matricula)\n");
        printf("2 - Questao 2 (numeros.txt)\n");
        printf("3 - Questao 3 (struct Funcionario)\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        if (scanf("%d", &op) != 1) break;

        switch (op) {
            case 1: questao1(); break;
            case 2: questao2(); break;
            case 3: questao3(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (op != 0);

    return 0;
}
