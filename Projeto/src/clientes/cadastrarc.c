#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastrarc.h"
/*

Colocar a opção de gravar dados? Sim ou não opção para o clinte.
1 - Clientes:
Nome: possui validação
CPF: possui validação
Data de Nascimento: possui validação
Gênero: 
Telefone:
Rua:
*/
//usar parametros de variaveis por referencias e não por valor.
//
Cliente cad_client(void) {
    Cliente cliente;

    // Alocação dinâmica para campos de tamanho variável
    cliente.nome = malloc(51 * sizeof(char));  // Nome com até 50 caracteres + 1 para '\0'
    cliente.rua = malloc(51 * sizeof(char));   // Rua com até 50 caracteres + 1 para '\0'

    if (cliente.nome == NULL || cliente.rua == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        exit(1);  // Sai do programa em caso de erro
    }

    printf("Digite o nome do cliente: \n");
    fgets(cliente.nome, 51, stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';  // Remove o '\n' final

    printf("Digite o CPF do cliente (123.456.789-12): \n");
    fgets(cliente.cpf, sizeof(cliente.cpf), stdin);
    cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';

    printf("Data de Nascimento (xx/xx/xxxx): -> \n");
    fgets(cliente.nasc, sizeof(cliente.nasc), stdin);
    cliente.nasc[strcspn(cliente.nasc, "\n")] = '\0';

    printf("Gênero (M/F): -> \n");
    fgets(cliente.gen, sizeof(cliente.gen), stdin);
    cliente.gen[strcspn(cliente.gen, "\n")] = '\0';

    printf("Digite Telefone ((xx) x xxxx-xxxx): -> \n");
    fgets(cliente.tel, sizeof(cliente.tel), stdin);
    cliente.tel[strcspn(cliente.tel, "\n")] = '\0';

    printf("Digite o nome da Rua: -> \n");
    fgets(cliente.rua, 51, stdin);
    cliente.rua[strcspn(cliente.rua, "\n")] = '\0';

    printf("Digite o número da casa: -> \n");
    fgets(cliente.num, sizeof(cliente.num), stdin);
    cliente.num[strcspn(cliente.num, "\n")] = '\0';

    printf("\nInformações do Cliente:\n");
    printf("Nome: %s\n", cliente.nome);
    printf("CPF: %s\n", cliente.cpf);
    printf("Data de Nascimento: %s\n", cliente.nasc);
    printf("Gênero: %s\n", cliente.gen);
    printf("Telefone: %s\n", cliente.tel);
    printf("Rua: %s\n", cliente.rua);
    printf("Numero da Casa: %s\n", cliente.num);

    return cliente;
}

/*
resp = printf("Você desejar salvar suas infromações? ");
    if resp == "S"{
        printf("Cadastrado com Sucesso");
    }else if{
        printf("Voltando ao menu...");
    }
*/
    

/*
void liberar_client(Cliente cliente) {
    free(cliente.nome);
    free(cliente.rua);
}
*/
