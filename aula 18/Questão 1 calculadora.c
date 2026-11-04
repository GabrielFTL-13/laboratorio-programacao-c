#include <stdio.h>

void exibirMenu(void) {
    printf("\n===== CALCULADORA =====\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
}

double somar(double a, double b) {
    return a + b;
}

double subtrair(double a, double b) {
    return a - b;
}

double multiplicar(double a, double b) {
    return a * b;
}

double dividir(double a, double b) {
    return a / b;
}

int main(void) {
    int opcao;
    double n1, n2, resultado;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nPrimeiro numero: ");
            scanf("%lf", &n1);
            printf("Segundo numero: ");
            scanf("%lf", &n2);

            switch (opcao) {
                case 1:
                    resultado = somar(n1, n2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = subtrair(n1, n2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = multiplicar(n1, n2);
                    printf("\nResultado: %.2f\n", resultado);
                    break;
                case 4:
                    if (n2 == 0) {
                        printf("\nErro: divisao por zero nao e permitida.\n");
                    } else {
                        resultado = dividir(n1, n2);
                        printf("\nResultado: %.2f\n", resultado);
                    }
                    break;
            }
        } else if (opcao != 0) {
            printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}
