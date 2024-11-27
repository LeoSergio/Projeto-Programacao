#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastrarc.h"


void limparBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

Cliente cad_client(void) {
    Cliente cliente;

    // Alocação dinâmica para campos de tamanho variável
    cliente.nome = malloc(51 * sizeof(char));  // Nome com até 50 caracteres + 1 para '\0'
    cliente.rua = malloc(51 * sizeof(char));   // Rua com até 50 caracteres + 1 para '\0'

    if (cliente.nome == NULL || cliente.rua == NULL) {
        fprintf(stderr, "Erro ao alocar memória.\n");
        exit(1);  // Sai do programa em caso de erro
    }

    // Captura do nome
    printf("Digite o nome do cliente: \n");
    limparBuffer();
    fgets(cliente.nome, 51, stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';  // Remove o '\n' final

    // Captura do CPF
    printf("Digite o CPF do cliente (123.456.789-12): \n");
    limparBuffer();
    fgets(cliente.cpf, sizeof(cliente.cpf), stdin);
    cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';

    // Captura da data de nascimento
    printf("Data de Nascimento (xx/xx/xxxx): -> \n");
    limparBuffer();
    fgets(cliente.nasc, sizeof(cliente.nasc), stdin);
    cliente.nasc[strcspn(cliente.nasc, "\n")] = '\0';

    // Captura do gênero
    printf("Gênero (M/F): -> \n");
    limparBuffer();
    fgets(cliente.gen, sizeof(cliente.gen), stdin);
    cliente.gen[strcspn(cliente.gen, "\n")] = '\0';

    // Captura do telefone
    printf("Digite Telefone ((xx) x xxxx-xxxx): -> \n");
    limparBuffer();
    fgets(cliente.tel, sizeof(cliente.tel), stdin);
    cliente.tel[strcspn(cliente.tel, "\n")] = '\0';

    // Captura da rua
    printf("Digite o nome da Rua: -> \n");
    limparBuffer();
    fgets(cliente.rua, 51, stdin);
    cliente.rua[strcspn(cliente.rua, "\n")] = '\0';

    // Captura do número da casa
    printf("Digite o número da casa: -> \n");
    limparBuffer();
    fgets(cliente.num, sizeof(cliente.num), stdin);
    cliente.num[strcspn(cliente.num, "\n")] = '\0';

    // Mostra os dados capturados
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
