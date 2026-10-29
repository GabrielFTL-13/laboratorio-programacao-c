// Questao 1
#include <stdio.h>
2.	
3.	int main() {
4.	    
5.	    int matriz[2][2] = {
6.	        {10, 20},
7.	        {30, 40}
8.	    };
9.	
10.	    printf("Matriz 2x2:\n");
11.	    for (int i = 0; i < 2; i++) {
12.	        for (int j = 0; j < 2; j++) {
13.	            printf("%4d ", matriz[i][j]);
14.	        }
15.	        printf("\n");
16.	    }
17.	
18.	    return 0;
19.	}

//Questão 2
#include <stdio.h>

int main() {
    int matriz[2][2];

    printf("Digite 4 valores para preencher a matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz preenchida:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
} 
// Questão 3
#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int soma = 0
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            soma += matriz[i][j];
        }
    }
    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA soma de todos os elementos e: %d\n", soma);

    return 0;
}
