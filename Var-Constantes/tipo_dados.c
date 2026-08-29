#include <stdio.h>

int main(){
    int ano;
    float litros;
    double km;
    char CNH;
    
    printf("Digite o ano em que estamos:");
    scanf("%d", &ano);
    
    printf("Digite a quantidade de litros que equivale a 210ml:");
    scanf("%f", &litros);
    
    printf("Digite quanto equivale 100 metros em quilometros:");
    scanf("%lf", &km);
    
    printf("Digite uma categoria de CNH:");
    scanf(" %c", &CNH);
}
