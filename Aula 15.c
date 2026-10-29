//Questão 1 
#include <stdio.h>

int main() {
    
    int cinema[3][4] = {
        {0, 1, 0, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };
    int ocupados = 0;
    int disponiveis = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (cinema[i][j] == 1) {
                ocupados++;
            } else {
                disponiveis++;
            }
        }
    }
    printf("Quantidade de assentos ocupados: %d\n", ocupados);
    printf("Quantidade de assentos disponiveis: %d\n", disponiveis);
    return 0;
}
// Questão 2 
#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;

    printf("Preencha a matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("\nA soma de todos os elementos e: %d\n", soma);
    return 0;
}
//Questão 3
#include <stdio.h>

int main() {
    
    float notas[3][2];

    for (int i = 0; i < 3; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        for (int j = 0; j < 2; j++) {
            printf("Nota da Prova %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nMedias dos alunos:\n");
    for (int i = 0; i < 3; i++) {
        float soma = 0;
        for (int j = 0; j < 2; j++) {
            soma += notas[i][j];
        }
        float media = soma / 2.0;
        printf("Aluno %d - Media: %.2f\n", i + 1, media);
    }

    return 0;
}
//Questão 4
#include <stdio.h>

int main() {
    int matriz[3][3];
    int pares = 0;

    printf("Digite 9 valores inteiros para a matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                pares++;
            }
        }
    }

    printf("\nQuantidade de numeros pares na matriz: %d\n", pares);
    return 0;
}
// Questão 5 
 #include <stdio.h>

int main() {
    int matriz[3][3];

    printf("Digite os valores da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    /
    int maior = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
}
    }
    printf("\nO maior valor armazenado e: %d\n", maior);
    return 0;
}
 

// Questao 6 
