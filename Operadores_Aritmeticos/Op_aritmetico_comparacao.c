#include <stdio.h>

int main()
{
    int n1 = 10, n2 = 3; // dois numeros inteiros.
    
    printf("=== Operadores Aritmeticos ===\n");
    printf("Soma = %d\n", n1+n2);
    printf("Subtracao = %d\n", n1-n2);
    printf("Multiplicacao = %d\n", n1*n2);
    printf("Divisao = %d\n", n1/n2);
    printf("Resto da divisao = %d\n", n1%n2);

    printf("\n=== Operadores de Comparacao ===\n");
    printf("\n1 = verdadeiro e 0 = falso\n\n");
    printf(" n1 = %d e n2 = %d \n", n1, n2);
    int maior = n1 > n2; // se n1 for maior que n2, retorna 1, pois é verdadeiro, caso contrário, retorna 0.
    printf("n1 > n2 ? %d\n", maior);
    int menor = n1 < n2;
    printf("n1 < n2 ? %d\n", menor);
    int igual = n1 == n2;
    printf("n1 == n2 ? %d\n", igual);
    int maior_igual = n1 >= n2;
    printf("n1 >= n2 ? %d\n", maior_igual);
    int menor_igual = n1 <= n2;
    printf("n1 <= n2 ? %d\n", menor_igual);
    
    return 0;
}