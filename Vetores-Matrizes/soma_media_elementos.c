/*Crie um programa que leia 10 números inteiros do usuário, armazene-os em um vetor e,
em seguida, calcule e mostre a soma de todos os elementos e a média aritmética deles.
*/
#include <stdio.h>

int main()
{
    int vet[10];
    int soma = 0;
    float media = 0;
    
    printf("Digite um valor:\n");
    for(int i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        soma =+ soma + vet[i];
    }
    printf("soma:%d\n", soma);
    media = soma/3;
    printf("media:%2.f", media);
    
    return 0;
}