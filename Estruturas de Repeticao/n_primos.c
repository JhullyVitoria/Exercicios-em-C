//Escreva um programa que leia dois números inteiros A e B (A < B) e imprima todos os números primos no intervalo [A, B]. Use FOR para percorrer o intervalo e WHILE (ou FOR aninhado) para testar a primalidade de cada número.
#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    
    scanf("%d %d", &a, &b);
    
    if(b>a){
        for(int i = a; i <= b; i++){
            
            // 1 = true, ou seja, é primo
            int primo = 1;
            
            if(i <= 1) primo = 0;
            else{
                // Testa divisores de 2 até o número anterior a ele
                for(int j = 2; j < i; j++){
                    if(i % j == 0){
                        primo = 0;
                        break;
                    }   
                }
                if (primo == 1) printf("%d ", i);
            }
        }
    }
    
    return 0;
}
