// Calculo do IMC
#include <stdio.h>

int main()
{
    char nome[30];
    int idade;
    float peso, altura;
    
    printf("Digite o seu nome:");
    scanf("%s[^29]", &nome);
    printf("Digite a sua idade:");
    scanf("%d", &idade);
    printf("Digite o seu peso e altura:");
    scanf("%f %f", &peso,  &altura);
    
    printf("\nOlá, %s, segue abaixo a avaliação sobre o seu Índice de Massa Corporal:\n", nome);
    printf("============================================\n"
           "     IMC            |     Classificação\n"
           "============================================\n");
    
    float IMC = peso/(altura*altura);
    
    if (IMC < 18.5) printf("%-20s|     Magreza", "Menor que 18,5");
        else if (IMC >= 18.5 && IMC <= 24.9) printf("%-20s|     Normal","18,5 a 24,9");
        else if (IMC >= 25 && IMC <= 29.9) printf("%-20s|     Sobrepeso","25 a 29,9");
        else if (IMC >= 30 && IMC <= 34.4) printf("%-20s|      Obesidade grau I","30 a 34,9");
        else if (IMC >= 35 && IMC <= 39.9) printf("%-20s|      Obesidade grau II","35 a 39,9");
        else printf("%-20s|      Obesidade grau III", "Maior que 40");

    return 0;
}
