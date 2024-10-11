#include <stdio.h>
#include <stdlib.h>


//funções principais
int tela_main(void);
void mod_vendas(void);
int info_proj(void);
void mod_client(void);
int mod_prod(void);
void mod_func(void);

// Vendas
void cadastrar_venda(void);
void exibir_venda(void);
void modificar_venda(void);
void excluir_venda(void);


//cliente
void cadastrar_cliente(void);
void exibir_cliente(void);
void modificar_cliente(void);
void excluir_cliente(void);

//produto
void cadastrar_produto(void);
void exibir_produto(void);
void modificar_produto(void);
void excluir_produto(void);

//funcionario
void cadastrar_funcionario(void);
void exibir_funcionario(void);
void modificar_funcionario(void);
void excluir_funcionario(void);

int main(void){
    int op;
    printf("Iniciando o programa...\n");
    do {
        op = tela_main();
        switch (op){
            case 1: mod_client();
                    break;
            case 2: mod_vendas();
                    break;
            case 3: mod_func();
                    break;
            case 4: mod_prod();
                    break;
            case 5: info_proj();
                    break;
        }
    } while (op != 0);
    printf("FIM DO PROGRAMA!\n");
    return 0;
}


int tela_main(){
    int op;
    printf("\n");
    printf("===========================================================\n");
    printf("=====                SIG-Building                     =====\n");
    printf("===========================================================\n");
    printf("=====    Sistema de gestão de material de construção  =====\n");
    printf("===========================================================\n");
    printf("=====                [1] - Clientes                   =====\n");
    printf("=====                [2] - Vendas                     =====\n");
    printf("=====                [3] - Funcionário                =====\n");
    printf("=====                [4] - Produto                    =====\n");
    printf("=====                [5] - Sobre o Projeto            =====\n");
    printf("=====                [0] - Sair                       =====\n");
    printf("Sua Escolha: --> ");
    scanf("%d", &op);
    printf("===========================================================\n");
    return op;
  
}

int info_proj(){
    int op;
    printf("\n");
    printf("===========================================================\n");
    printf("=====   Universidade Federal Rio Grande do Norte      =====\n");
    printf("=====   Diciplina: Programação,  codigo: DCT1106      =====\n");
    printf("=====               Programa de Gestão                =====\n");
    printf("=====   Para uma Loja de Material de Construção       =====\n");
    printf("===========================================================\n");
    printf("=====   O Projeto tem o objetivo Criar um programa    =====\n");
    printf("=====   de Gestão para uma Loja de Materais           =====\n");
    printf("=====   de Construção,tem como objetivo ajudar na     =====\n");
    printf("=====   administração da loja,sendo possivel administa=====\n");
    printf("=====   produtos,vendas,clientes,funcionarios e tambem=====\n");
    printf("=====   relatorios                                    =====\n");
    printf("===========================================================\n");

    printf("\n");
    printf("===========================================================\n");
    printf("=====            Equipe de desenvolvimento            =====\n");
    printf("===========================================================\n");
    printf("=====            Leandro Sergio Da Silva              =====\n");
    printf("=====            Arthur De Medeiros Dantas            =====\n");
    printf("===========================================================\n");
    getchar();
    scanf("%i", &op);
    printf("===                [0] - Sair                         =====\n");
    return 0;
}

//vendas
void mod_vendas(void) {
    int op;
    do {
        printf("\n===========================================================\n");
        printf("===                   Módulo de Vendas                =====\n");
        printf("===========================================================\n");
        printf("===    [1] - Cadastrar Venda                          ===\n");
        printf("===    [2] - Exibir Venda                             ===\n");
        printf("===    [3] - Modificar Venda                          ===\n");
        printf("===    [4] - Excluir Venda                            ===\n");
        printf("===    [0] - Voltar ao Menu Principal                 ===\n");
        printf("===========================================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch(op) {
            case 1:
                cadastrar_venda();
                break;
            case 2:
                exibir_venda();
                break;
            case 3:
                modificar_venda();
                break;
            case 4:
                excluir_venda();
                break;
            case 0:
                printf("Voltando ao Menu Principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(op != 0);
}

void cadastrar_venda(void) {
    int codVenda;
    float valor;
    
    printf("\n===========================================================\n");
    printf("======═             Cadastrar Venda                  ======\n");
    printf("===========================================================\n");
    printf("Digite o código da venda: ");
    scanf("%d", &codVenda);
    printf("Digite o valor da venda: ");
    scanf("%f", &valor);
    printf("Venda cadastrada com sucesso!\n");
    printf("===========================================================\n");
}

void exibir_venda(void) {
    int codVenda;
    
    printf("\n===========================================================\n");
    printf("======═             Exibir Venda                     ======\n");
    printf("===========================================================\n");
    printf("Digite o código da venda: ");
    scanf("%d", &codVenda);
    printf("===========================================================\n");
}

void modificar_venda(void) {
    int codVenda;
    
    printf("\n===========================================================\n");
    printf("======═             Modificar Venda                  ======\n");
    printf("===========================================================\n");
    printf("Digite o código da venda a ser modificada: ");
    scanf("%d", &codVenda);
    printf("===========================================================\n");
}

void excluir_venda(void) {
    int codVenda;
    
    printf("\n===========================================================\n");
    printf("======═             Excluir Venda                    ======\n");
    printf("===========================================================\n");
    printf("Digite o código da venda a ser excluída: ");
    scanf("%d", &codVenda);
    printf("===========================================================\n");
}

// modulo clientes
void mod_client(void){
    int op;
    do {
        printf("\n===========================================================\n");
        printf("===                Módulo de Clientes                =====\n");
        printf("===========================================================\n");
        printf("===    [1] - Cadastrar Clientes                      ===\n");
        printf("===    [2] - Exibir Clientes                         ===\n");
        printf("===    [3] - Modificar Clientes                      ===\n");
        printf("===    [4] - Excluir Clientes                        ===\n");
        printf("===    [0] - Voltar ao Menu Principal                ===\n");
        printf("===========================================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                cadastrar_cliente();
                break;
            case 2:
                exibir_cliente();
                break;
            case 3:
                modificar_cliente();
                break;
            case 4:
                excluir_cliente();
                break;
            case 0:
                printf("Voltando ao Menu Principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(op != 0);
}

void cadastrar_cliente(void){
    char nome[50];
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Cadastrar Cliente                ======\n");
    printf("===========================================================\n");
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", nome);
    printf("Digite o CPF do cliente: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}

void exibir_cliente(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═                 Exibir Cliente               ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do cliente: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}

void modificar_cliente(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Modificar Cliente                ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do cliente a ser modificado: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}

void excluir_cliente(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Excluir Cliente                  ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do cliente a ser excluído: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}


// modulo produtos


int mod_prod(void) {
    int op;
    do {
        printf("\n");
        printf("===========================================================\n");
        printf("=====                Produto                          =====\n");
        printf("===========================================================\n");
        printf("=====         [1] - Cadastrar produto                 =====\n");
        printf("=====         [2] - Exibir produto                    =====\n");
        printf("=====         [3] - Modificar produto                 =====\n");
        printf("=====         [4] - Excluir produto                   =====\n");
        printf("=====         [0] - Sair                              =====\n");
        printf("===========================================================\n");
        printf("Sua Escolha: --> ");
        scanf("%d", &op);
        
        switch(op) {
            case 1:
                cadastrar_produto();
                break;
            case 2:
                exibir_produto();
                break;
            case 3:
                modificar_produto();
                break;
            case 4:
                excluir_produto();
                break;
            case 0:
                printf("Saindo do módulo de produto...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (op != 0);  
    
    return 0;
}

void cadastrar_produto(void){
    char codigo[20];
    char nome[50];
    float preco;
    
    printf("\n===========================================================\n");
    printf("======═             Cadastrar Produto                ======\n");
    printf("===========================================================\n");
    printf("Digite o código de barra: ");
    scanf("%s", codigo);
    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", nome);  
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);   
    printf("===========================================================\n");
}

void exibir_produto(void){
    char codigo[20];
    printf("\n===========================================================\n");
    printf("======═                 Exibir Produto               ======\n");
    printf("===========================================================\n");
    printf("Digite o código de barra do produto: ");
    scanf("%s", codigo);;
    printf("===========================================================\n");
}

void modificar_produto(void){
    char codigo[20];
    printf("\n===========================================================\n");
    printf("======═             Modificar Produto                ======\n");
    printf("===========================================================\n");
    printf("Digite o código de barra do produto a ser modificado: ");
    scanf("%s", codigo);
    printf("===========================================================\n");
}

void excluir_produto(void){
    char codigo[20];
    printf("\n===========================================================\n");
    printf("======═             Excluir Produto                  ======\n");
    printf("===========================================================\n");
    printf("Digite o código de barra do produto a ser excluído: ");
    scanf("%s", codigo);
    printf("===========================================================\n");
}

//modulo funcionarios

void mod_func(void){
    int op;
    do {
        printf("\n===========================================================\n");
        printf("===               Módulo de Funcionários              =====\n");
        printf("===========================================================\n");
        printf("===    [1] - Cadastrar Funcionário                   ===\n");
        printf("===    [2] - Exibir Funcionários                      ===\n");
        printf("===    [3] - Modificar Funcionário                   ===\n");
        printf("===    [4] - Excluir Funcionário                     ===\n");
        printf("===    [0] - Voltar ao Menu Principal                ===\n");
        printf("===========================================================\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);
        switch(op){
            case 1:
                cadastrar_funcionario();
                break;
            case 2:
                exibir_funcionario();
                break;
            case 3:
                modificar_funcionario();
                break;
            case 4:
                excluir_funcionario();
                break;
            case 0:
                printf("Voltando ao Menu Principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(op != 0);
}

void cadastrar_funcionario(void){
    char nome[50];
    char cpf[20];
    char data_nasc[11];
    printf("\n===========================================================\n");
    printf("======═             Cadastrar Funcionário            ======\n");
    printf("===========================================================\n");
    printf("Digite o nome do funcionário: ");
    scanf(" %[^\n]", nome);
    printf("Digite o CPF do funcionário: ");
    scanf("%s", cpf);
    getchar();
    printf("Digite a data de nascimento (DD/MM/AAAA): ");
    scanf("%s", data_nasc);
    printf("===========================================================\n");
}

void exibir_funcionario(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Exibir Funcionário               ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do funcionário: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}

void modificar_funcionario(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Modificar Funcionário            ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do funcionário a ser modificado: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}

void excluir_funcionario(void){
    char cpf[20];
    printf("\n===========================================================\n");
    printf("======═             Excluir Funcionário              ======\n");
    printf("===========================================================\n");
    printf("Digite o CPF do funcionário a ser excluído: ");
    scanf("%s", cpf);
    printf("===========================================================\n");
}