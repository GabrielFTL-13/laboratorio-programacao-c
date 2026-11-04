#include <stdio.h>

double maiorPreco(double p1, double p2) {
    if (p1 > p2) {
        return p1;
    }
    return p2;
}

int main(void) {
    double preco1, preco2;

    printf("===== COMPARADOR DE PRECOS =====\n\n");
    printf("Preco 1: ");
    scanf("%lf", &preco1);
    printf("Preco 2: ");
    scanf("%lf", &preco2);

    if (preco1 == preco2) {
        printf("\nOs precos sao iguais: R$ %.2f\n", preco1);
    } else {
        double maior = maiorPreco(preco1, preco2);
        printf("\nMaior preco: R$ %.2f\n", maior);
    }

    return 0;
}