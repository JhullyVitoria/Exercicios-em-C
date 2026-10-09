/* Exercício: Sistema de Pedidos da Lanchonete
Objetivo: Crie um programa que exiba um cardápio interativo e permita que o usuário faça um pedido contendo múltiplos itens.
Requisitos do Programa:
1.	Menu de Opções: Exiba o seguinte cardápio no console:
	1 - Hambúrguer (R$ 15,00)
	2 - Batata Frita (R$ 8,00)
	3 - Refrigerante (R$ 5,00)
	0 - Finalizar Pedido
2.	Laço de Repetição (while):
	Mantenha o programa em loop solicitando que o usuário escolha o código de um produto até que ele digite 0.
3.	Estrutura de Seleção (switch):
	Use o switch para identificar o código digitado:
	Adicione o valor correspondente ao total da conta.
	Exiba uma mensagem confirmando o item adicionado.
	Caso digite um código inválido, exiba a mensagem: "Opção inválida!".
4.	Resumo Final (for):
	Ao finalizar o pedido (opção 0), peça para o usuário definir em quantas parcelas deseja pagar (ex: de 1 a 3 vezes).
	Utilize um laço for para calcular e exibir no console o valor exato de cada parcela.
*/
#include <stdio.h>

int main()
{
    int opcao;
    float total_conta = 0;
    int parcela;
    
    printf("====== CARDAPIO DA PREPARA ======\n");
    printf("1 - Hamburguer (R$ 15,00)\n"
    "2 - Batata Frita (R$ 8,00)\n"
    "3 - Refrigerante 2L (R$ 5,00)\n"
    "0 - Finalizar Pedido\n");
    printf("=================================\n\n");
    
    while(1){
        printf("Digite uma opcao:");
        scanf("%d", &opcao);
        
        if(opcao == 0) break;
        switch(opcao){
            case 1: 
                total_conta += 15.00;
                printf("Hamburguer adicionado!\n");
                break;
            case 2: 
                total_conta += 8.00;
                printf("Batata Frita adicionado!\n");
                break;
            case 3: 
                total_conta += 5.00;
                printf("Refrigerante 2L adicionado!\n");
                break;
            default:
                printf("Opcao Invalida!\n");
        }
    }
    if(total_conta > 0){
        printf("\nVALOR TOTAL: R$%.2f\n", total_conta);
        printf("Digite em quantas vezes deseja parcelar o valor total:");
        scanf("%d", &parcela);
    
        float total = total_conta/parcela;
        for(int i = 0; i < parcela; i++) printf("%dª parcela de %.2f\n", i+1, total);
    }
  
    return 0;
}
