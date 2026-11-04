#include <stdio.h>

int verificarPar(int numero) {
    if (numero % 2 == 0) {
        return 1;
    }
    return 0;
}

int main(void) {
    int num;

    printf("===== VERIFICADOR DE NUMEROS =====\n");
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (verificarPar(num)) {
        printf("O numero %d e par.\n", num);
    } else {
        printf("O numero %d e impar.\n", num);
    }

    return 0;
}