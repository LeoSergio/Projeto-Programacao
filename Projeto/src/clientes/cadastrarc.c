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
    //char resp;

    // Alocação dinâmica para campos de tamanho variável
    cliente.nome = malloc(51 * sizeof(char));  // Ajuste conforme o tamanho necessário
    cliente.rua = malloc(51 * sizeof(char));   // Ajuste conforme o tamanho necessário

    printf("Digite o nome do cliente: \n");
    scanf(" %[^\n]", cliente.nome);

    printf("Digite o CPF do cliente (123.456.789-12): \n");
    scanf("%s", cliente.cpf);

    printf("Data de Nascimento (xx/xx/xxxx): -> \n");
    scanf("%s", cliente.nasc);

    printf("Gênero (M/F): -> \n");
    scanf("%s", cliente.gen);

    printf("Digite Telefone ((xx) x xxxx-xxxx): -> \n");
    scanf("%s", cliente.tel);

    printf("Digite o nome da Rua: -> \n");
    scanf(" %[^\n]", cliente.rua);

    printf("Digite o número da casa: -> \n");
    scanf("%[^\n]", cliente.num);


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
