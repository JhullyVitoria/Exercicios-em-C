//Problema "quadrante": escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de 
// pontos no sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). 
// O algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA 
// (nesta situação sem escrever mensagem alguma).

#include <stdio.h>

int main()
{
    int X, Y;
    
    printf("Digite os valores das coordenadas X e Y:\n");
    // o loop continua rodando enquanto há dois números na entrada
    while(scanf("%d %d", &X, &Y) == 2){
        
        // se o X ou Y for == 0, encerra o programa
        if(X == 0 || Y == 0)
            break;
        
        if (X > 0 && Y > 0)
            printf("Quadrante Q1\n");
        else if (X > 0 && Y < 0)
            printf("Quadrante Q4\n");
        else if (X < 0 && Y > 0)
            printf("Quadrante Q2\n");
        else
            printf("Quadrante Q3\n");
    }
    
    return 0;
}
