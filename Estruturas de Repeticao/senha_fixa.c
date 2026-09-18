//Escreva um programa que repita a leitura de uma senha até que ela seja válida. 
//Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida!
//Tente novamente:". Quando a senha for informada corretamente deve ser impressa a 
//mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha 
//correta é o valor senha123.
#include <stdio.h>
#include <string.h>

int main()
{
    char senha[9];
    char senha_user[9] = "senha123";
    
    printf("Digite a senha:\n");
    
    while(1){
        scanf("%8s", senha);
        
        if(strcmp(senha, senha_user) == 0){
            printf("Acesso Permitido!");
            break;
        }
        printf("Senha inválida!Tente novamente:\n");
        
        
    }
    
    return 0;
}
