//Leia um número inteiro positivo N. Calcule a soma dos seus dígitos. Se o resultado tiver mais de um dígito, repita o processo até sobrar apenas um algarismo (esse processo é chamado de "raiz digital"). Use WHILE para o laço externo (repetir até restar 1 dígito) e outro WHILE interno para somar os dígitos de cada número.
//Exemplo: 9875 → 9+8+7+5=29 → 2+9=11 → 1+1=2 → resultado final: 2

#include <stdio.h>

int main()
{
    int n = 0;
    
    scanf("%d", &n);
    while(n >= 10){
        int soma = 0;
        while(n > 0){
            soma = soma + (n%10); //pega último dígito
            n = n/10; //corta último dígito
        }
        n = soma;
    }
    printf("\nResultado final: %d", n);
    return 0;
}
