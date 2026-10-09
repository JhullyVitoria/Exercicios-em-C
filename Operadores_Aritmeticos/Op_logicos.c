#include <stdio.h>
int main()
{
     float x = 13.70, y = 3.89; // dois numeros do tipo float.

    printf("=== Operadores Lógicos ===\n");
    printf("\n1  representa verdadeiro e 0 representa falso\n\n");
    printf("Os valores para analise sao: x = %.2f e y = %.2f \n\n", x, y);
    
    printf("OPERADOR AND (&&):\n");
    /* retorna 1 se ambas as afirmações forem verdadeiras e falso caso pelo menos uma seja falsa*/
    int resultado_and = (x > 10.2) && (y > 2.67);  
    printf("\t(x > 10.2) e (y > 2.67): %d\n", resultado_and);
    
    int resultado_and1 = (x > 11.34) && (y <= 2.47);  
    printf("\t(x > 11.34) e (y <= 2.67): %d\n", resultado_and1);
    
    printf("\nOPERADOR OR (||):");
    /* retorna 1 se PELO menos UMA das afirmações forem verdadeiras e falso se ambas forem falsas*/
    int resultado_or = (x <= 15) || (y == 4.25);  
    printf("\n\t(x > 15) ou (y > 4.25): %d\n", resultado_or);
    
    int resultado_or1 = (x =! 13.70) || (y <= 2.95);  
    printf("\t(x != 15) ou (y  >= 2.95): %d\n", resultado_or1);
    
    printf("\nOPERADOR NOT (!):\n");
    int luz_acesa = 1;      // 1 representa verdadeiro, ou seja, a luz está acesa.
    // Invertendo o valor
    int result_acesa = !luz_acesa;     // Vira 0
    
    printf("\tOriginal: %d (luz acesa) -> Com o operador NOT: %d (luz apagada)\n", luz_acesa, result_acesa);

    return 0;
}
