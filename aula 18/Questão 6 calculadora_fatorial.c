#include <stdio.h>

long long calcularFatorial(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main(void) {
    int numero;

    printf("===== CALCULADORA DE FATORIAL =====\n");
    
    do {
        printf("Digite um numero (0 a 12): ");
        scanf("%d", &numero);
        if (numero < 0 || numero > 12) {
            printf("Valor invalido! Introduza um numero entre 0 e 12.\n");
        }
    } while (numero < 0 || numero > 12);

    long long resultado = calcularFatorial(numero);
    printf("\nFatorial de %d = %lld\n", numero, resultado);

    return 0;
}