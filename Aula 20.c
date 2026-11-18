#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;


void cadastrarFuncionario(Funcionario *f, int numero) {
    printf("\n--- Cadastro do Funcionario %d ---\n", numero);

    printf("Nome: ");
    fgets(f->nome, sizeof(f->nome), stdin);
    f->nome[strcspn(f->nome, "\n")] = '\0'; 

    printf("Idade: ");
    scanf("%d", &f->idade);

    printf("Salario: R$ ");
    scanf("%f", &f->salario);

    getchar(); 
}


void exibirFuncionario(Funcionario f, int numero) {
    printf("\nFuncionario %d\n", numero);
    printf("Nome: %s\n", f.nome);
    printf("Idade: %d anos\n", f.idade);
    printf("Salario: R$ %.2f\n", f.salario);
}

int main() {
  
    Funcionario funcionario1, funcionario2;
    float diferenca;

  
    cadastrarFuncionario(&funcionario1, 1);
    cadastrarFuncionario(&funcionario2, 2);

  
    printf("\n===== Dados Cadastrados =====");
    exibirFuncionario(funcionario1, 1);
    exibirFuncionario(funcionario2, 2);

    printf("\n===== Resultado =====\n");

   
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
