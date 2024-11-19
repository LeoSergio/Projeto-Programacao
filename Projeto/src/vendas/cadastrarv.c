#include <stdio.h>
#include <stdlib.h>
#include "cadastrarv.h"
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



/*
Módulo de Vendas - Loja de Materiais de Construção

1. Exibição dos Produtos:
   - Exiba os produtos disponíveis no estoque, organizados por categoria.
   - Exemplo de saída no terminal:
   
     Produtos Disponíveis:

     Materiais de Construção:
       1 - Cimento (50 kg): R$ 30,00 por saco
       2 - Blocos de Concreto (unidade): R$ 5,00

     Ferramentas:
       3 - Martelo: R$ 25,00
       4 - Chave de Fenda (conjunto): R$ 20,00
       5 - Alicates: R$ 15,00
       6 - Serra Manual: R$ 35,00

2. Processo de Compra:
   - Pergunte ao cliente qual produto deseja comprar:
     "Faça sua compra, o que você deseja? (Escolha o número do produto)"
   - Após escolher o produto, solicite a quantidade:
     "Quantos você deseja comprar?"

3. Verificação do Estoque:
   - Verifique se a quantidade solicitada está disponível:
     - **Se disponível**:
       - Calcule o total: (quantidade * preço).
       - Atualize o estoque.
       - Adicione o item ao carrinho.
       - Exemplo: "Total: R$ X,XX. Produto adicionado ao carrinho."
     - **Se não disponível**:
       - Informe que a quantidade é insuficiente e solicite uma nova:
         "Quantidade indisponível no estoque. Por favor, selecione uma quantidade menor."

4. Continuar Comprando ou Finalizar:
   - Pergunte se o cliente deseja adicionar mais produtos:
     "Deseja adicionar mais produtos? (S/N)"
   - Se não, exiba o resumo da compra:
     Resumo da Compra:
     - Listar os itens comprados com quantidade, preço unitário e subtotal.
     - Exemplo:
       2 x Cimento - R$ 60,00
       1 x Martelo - R$ 25,00
       Total: R$ 85,00

5. Finalizar a Compra:
   - Pergunte se o cliente deseja finalizar a compra:
     "Deseja finalizar a compra? (S/N)"
   - **Se sim**, exiba os modos de pagamento:
     Modos de Pagamento:
     1 - Pix
     2 - Cartão de Crédito
     3 - Cartão de Débito

     Após escolher o modo de pagamento, exiba:
     "Obrigado por sua compra! Volte sempre."

   - **Se não**, pergunte se deseja cancelar a compra:
     "Você deseja cancelar a compra? Todos os dados serão apagados. (S/N)"
     - **Se cancelar**: Esvazie o carrinho e exiba:
       "Compra cancelada. Voltando ao menu principal."

*/