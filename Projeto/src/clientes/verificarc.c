#include <stdio.h>
#include <string.h>
#include "../clientes/cadastrarc.h"

// Função para buscar e exibir informações do cliente pelo CPF
Cliente exibir_cliente(Cliente *cliente, int size, const char *cpf_busca) {
    //cliente clientes;
    for (int i = 0; i < size; i++) {
        if (strcmp(cliente[i].cpf, cpf_busca) == 0) {  // CPF encontrado
            printf("\nCliente encontrado:\n");
            printf("Nome: %s\n", cliente[i].nome);
            printf("CPF: %s\n", cliente[i].cpf);
            printf("Data de Nascimento: %s\n", cliente[i].nasc);
            printf("Gênero: %s\n", cliente[i].gen);
            printf("Telefone: %s\n", cliente[i].tel);
            printf("Rua: %s\n", cliente[i].rua);
            printf("Número da casa: %s\n", cliente[i].num);
            
            // Liberando memória alocada dinamicamente
            
            return cliente[i];  // Retorna o cliente encontrado
        }
    }

    // Caso o CPF não seja encontrado
    printf("\nCliente com CPF %s não encontrado.\n", cpf_busca);

    // Retornar um cliente vazio em caso de não encontrado
    Cliente cliente_vazio = {0};  // Inicializa todos os campos com valores padrão
    return cliente_vazio;
}
