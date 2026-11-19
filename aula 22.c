
#include <stdio.h>

// Questao 1 - Endereco de memoria 
void questao1() {
    int numero;

    printf("\n--- Questao 1 - Endereco de memoria ---\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Valor: %d\n", numero);
    printf("Endereco de memoria: %p\n", (void *)&numero);
}

// Questao 2 - Utilizando ponteiros 
void questao2() {
    int valor = 20;
    int *ptr = &valor;

    printf("\n--- Questao 2 - Utilizando ponteiros ---\n");
    printf("Valor da variavel: %d\n", valor);
    printf("Endereco da variavel: %p\n", (void *)ptr);
    printf("Valor acessado pelo ponteiro: %d\n", *ptr);
}

// Questao 3 - Alteracao de valores 
void questao3() {
    int valor = 15;
    int *ptr = &valor;

    printf("\n--- Questao 3 - Alteracao de valores ---\n");
    printf("Valor antes da alteracao: %d\n", valor);

    *ptr = 50;

    printf("Valor depois da alteracao: %d\n", valor);
}

// Questao 4 - Ponteiros e funcoes
void dobrar(int *n) {
    *n = *n * 2;
}

void questao4() {
    int numero;

    printf("\n--- Questao 4 - Ponteiros e funcoes ---\n");
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    dobrar(&numero);

    printf("O dobro e: %d\n", numero);
}

// Questao 5 - Ponteiros e vetores
void questao5() {
    int vetor[5];
    int *ptr = vetor;
    int i;

    printf("\n--- Questao 5 - Ponteiros e vetores ---\n");
    for (i = 0; i < 5; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Elementos do vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, *(ptr + i));
    }
}

int main() {
    questao1();
    questao2();
    questao3();
    questao4();
    questao5();

    return 0;
}
