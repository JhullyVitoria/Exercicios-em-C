#include <stdio.h>

int main()
{
    int vetor[5];
    
    for(int i = 0; i < 5; i++){
        printf("Digite um valor:");
        scanf("%d", &vetor[i]);
    }

    printf("Os valores armazenados foram: \n");
    for(int i = 0; i < 5; i++) printf("vetor[%d] com o conteudo = %d\n", i, vetor[i]);
    return 0;
}