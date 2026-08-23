#include <stdio.h>

int main()
{
    int matriz[3][3];
    
    // for para leitura dos valores
    printf("Digite um valor inteiro:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            scanf("%d", &matriz[i][j]);
    }
    
    // for para imprimir o resultado
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            printf("matriz[%d][%d]  |  conteudo da matriz: %d\n", i, j, matriz[i][j]);
    }
    return 0;
}


