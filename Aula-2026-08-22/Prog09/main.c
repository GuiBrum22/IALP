#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lateralSala = 11;// Não pode ser impar por questão de ser dividido por 2
    float comprimentoquarto = 7; //aqui ja pode por questão de ser comprimento do quarto
    float areaSala;
    float areaQuarto;
    float areaTotal;
    
    printf("programa para calculo de area da casa \n"); 
    areaSala = lateralSala * lateralSala;
    printf("a area da sala e %f \n", areaSala);
    areaQuarto = (lateralSala/2)*comprimentoquarto;
    printf("a area do quarto e %f \n", areaQuarto);
    areaTotal = areaSala + 2*areaQuarto;
    printf("a area total e %f \n", areaTotal); 

    system("pause");
    return 0;
}