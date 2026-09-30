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