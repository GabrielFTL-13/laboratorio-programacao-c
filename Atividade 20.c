#include <stdio.h>
#include <string.h>

/* 1 e 2. Estrutura Funcionario com typedef */
typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

/* Lê os dados de um funcionário */
void cadastrarFuncionario(Funcionario *f, int numero) {
    printf("\n--- Cadastro do Funcionario %d ---\n", numero);

    printf("Nome: ");
    fgets(f->nome, sizeof(f->nome), stdin);
    f->nome[strcspn(f->nome, "\n")] = '\0'; /* remove o \n do final */

    printf("Idade: ");
    scanf("%d", &f->idade);

    printf("Salario: R$ ");
    scanf("%f", &f->salario);

    getchar(); /* limpa o \n que sobra no buffer */
}

/* Exibe os dados de um funcionário */
void exibirFuncionario(Funcionario f, int numero) {
    printf("\nFuncionario %d\n", numero);
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d anos\n", f.idade);
    printf("Salario: R$ %.2f\n", f.salario);
}

int main() {
    /* 3. Declaração das duas variáveis */
    Funcionario funcionario1, funcionario2;
    float diferenca;

    /* 4. Solicitar os dados */
    cadastrarFuncionario(&funcionario1, 1);
    cadastrarFuncionario(&funcionario2, 2);

    /* 5. Apresentar os dados cadastrados */
    printf("\n===== Dados Cadastrados =====");
    exibirFuncionario(funcionario1, 1);
    exibirFuncionario(funcionario2, 2);

    printf("\n===== Resultado =====\n");

    /* 6, 7 e 8. Maior salário, diferença e salários iguais */
    if (funcionario1.salario > funcionario2.salario) {
        diferenca = funcionario1.salario - funcionario2.salario;
        printf("%s possui o maior salario: R$ %.2f\n", funcionario1.nome, funcionario1.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else if (funcionario2.salario > funcionario1.salario) {
        diferenca = funcionario2.salario - funcionario1.salario;
        printf("%s possui o maior salario: R$ %.2f\n", funcionario2.nome, funcionario2.salario);
        printf("Diferenca salarial: R$ %.2f\n", diferenca);
    } else {
        printf("Os dois funcionarios recebem o mesmo salario: R$ %.2f\n", funcionario1.salario);
    }

    return 0;
}
