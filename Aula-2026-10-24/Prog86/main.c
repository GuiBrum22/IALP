#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float comprimento;
    float largura;
    float area; 
    printf("Programa para calcular a area de um retangulo\n");

    while (1)
    {
        printf("Digite o comprimento ou 0 (zero) para sair: ");
        scanf("%f", &comprimento);
        if (comprimento == 0) break;
        printf("Digite a largura: ");
        scanf("%f", &largura);

        
        printf("A area do retangulo e: %.2f\n", comprimento * largura);
        
    }
    
    system("pause");
    return 0;
}