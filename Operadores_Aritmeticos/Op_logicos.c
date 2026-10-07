#include <stdio.h>

int main()
{
     float x = 13.70, y = 3.89; // dois numeros do tipo float.

    printf("=== Operadores Lógicos ===\n");
    printf("\n1 = verdadeiro e 0 = falso\n\n");
    printf("x = %.2f e y = %.2f \n\n", x, y);
    
    printf("AND\n");
    /* retorna 1 se ambas as afirmações forem verdadeiras e falso caso pelo menos uma seja falsa*/
    int resultado_and = (x > 10.2) && (y > 2.67);  
    printf("(x > 10.2) e (y > 2.67): %d\n", resultado_and);
    
    int resultado_and1 = (x > 11.34) && (y <= 2.47);  
    printf("(x > 11.34) e (y <= 2.67): %d\n", resultado_and1);
    
    printf("\nOR");
    /* retorna 1 se PELO menos UMA das afirmações forem verdadeiras e falso se ambas forem falsas*/
    int resultado_or = (x <= 15) || (y == 4.25);  
    printf("\n(x > 15) ou (y > 4.25): %d\n", resultado_or);
    
    int resultado_or1 = (x =! 13.70) || (y <= 2.95);  
    printf("(x != 15) ou (y  >= 2.95): %d\n", resultado_or1);
    
    printf("\nNOT\n");
    int ativo = 1;      // 1 representa verdadeiro
    int bloqueado = 0;  // 0 representa falso

    // Invertendo os valores
    int result_not = !ativo;     // Vira 0
    int result_not1 = !bloqueado; // Vira 1

    printf("Original: %d -> Com NOT (!): %d\n", ativo, result_not);
    printf("Original: %d -> Com NOT (!): %d\n", bloqueado, result_not1);

    return 0;
}