//Faça um programa para ler um número indeterminado de dados, 
//contendo cada um, a idade de um indivíduo. O último dado, que 
//não entrará nos cálculos, contém um valor de idade negativa. 
//Calcular e imprimir a idade média deste grupo de indivíduos. 
//Se for entrado um valor negativo na primeira vez, mostrar a 
//mensagem "IMPOSSIVEL CALCULAR".
#include <stdio.h>

int main()
{
    int idade = 0, cont = 0;
    float soma = 0;
    
    printf("Digite as idades:\n");
    
    while(1){
        scanf("%d", &idade);
        
        if(idade < 0){
            if(cont == 0){
                printf("IMPOSSIVEL CALCULAR\n");
            }
            break;
        }
        cont++;
        soma = soma + idade;
    }
    
    if(cont > 0){
        float media = soma/cont;
        printf("MEDIA:%.2f", media);
    }
    
    return 0;
}
