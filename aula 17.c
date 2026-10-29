//Questão 1 
#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char nomeConfirmacao[50];
    char mensagemBoasVindas[100] = "Bem-vindo(a), ";
    char tipoPerfil[30];

   
    printf("===== CADASTRO DE USUARIOS =====\n");
    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

   
    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(tipoPerfil, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(tipoPerfil, "Comum");
    } else {
        strcpy(tipoPerfil, "Desconhecido");
    }

   
    strcpy(nomeConfirmacao, nome);

   
    strcat(mensagemBoasVindas, nomeConfirmacao);
    strcat(mensagemBoasVindas, "!\n");

   
    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", nomeConfirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nomeConfirmacao));
    printf("Perfil: %s\n\n", tipoPerfil);
    printf("%s", mensagemBoasVindas);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}

// Questão 2 
#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[30];
    char produtoCopia[50];
    char descricao[100] = "Produto: ";
    char categoriaFormatada[30];

  
    printf("===== CADASTRO DE PRODUTOS =====\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);

   
    printf("Categoria: ");
    scanf("%29s", categoria);

   
    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(categoriaFormatada, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(categoriaFormatada, "Periferico");
    } else {
        strcpy(categoriaFormatada, "Outro");
    }

   
    strcpy(produtoCopia, produto);

   
    strcat(descricao, produtoCopia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produtoCopia);
    printf("Caracteres: %zu\n", strlen(produtoCopia));
    printf("Categoria: %s\n\n", categoriaFormatada);
    printf("Descricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
// Questão 3 
#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[30];
    char produtoCopia[50];
    char descricao[100] = "Produto: ";
    char categoriaFormatada[30];

    
    printf("===== CADASTRO DE PRODUTOS =====\n");
    printf("Nome do produto: ");
    scanf("%49s", produto);

   
    printf("Categoria: ");
    scanf("%29s", categoria);

   
    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(categoriaFormatada, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(categoriaFormatada, "Periferico");
    } else {
        strcpy(categoriaFormatada, "Outro");
    }

   
    strcpy(produtoCopia, produto);

  
    strcat(descricao, produtoCopia);

   
    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", produtoCopia);
    printf("Caracteres: %zu\n", strlen(produtoCopia));
    printf("Categoria: %s\n\n", categoriaFormatada);
    printf("Descricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}