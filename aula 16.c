// Questão 1
#include <stdio.h>
int main() {
    char palavra[100];
    int contador = 0;
    printf("Digite uma palavra: ");
    scanf("%99s", palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++;
    }
    printf("Quantidade de letras digitadas: %d\n", contador);

    return 0;
}
// Questão 2
#include <stdio.h>
int main() {
    char nomeCompleto[150];
    printf("Digite seu nome completo: ");
    fgets(nomeCompleto, sizeof(nomeCompleto), stdin);
    printf("Nome completo digitado: %s", nomeCompleto);
    return 0;
} 
// Questão 3
#include <stdio.h>
int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%99s", palavra);
    printf("Primeiro caractere: %c\n", palavra[0]);
    return 0;
}
// Questão 4 
#include <stdio.h>
int main() {
    char palavra[100];
    printf("Digite uma palavra: ");
    scanf("%99s", palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }
    return 0;
} 
// Questão 5
#include <stdio.h>
int main() {
    char palavra[100];
    int vogais = 0;
    printf("Digite uma palavra (em letras minusculas): ");
    scanf("%99s", palavra);
    for (int i = 0; palavra[i] != '\0'; i++) {
        char c = palavra[i];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vogais++;
        }
    }
    printf("Quantidade de vogais: %d\n", vogais);
 return 0;
}
