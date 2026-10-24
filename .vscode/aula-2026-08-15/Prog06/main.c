#include <stdio.h>
#include <stdlib.h>

int main()
{
    int areaSala; //int = Numero inteiro
    int areaQuarto;

    int areaTotal;

    printf("Programa para calculo de casa \n"); // o \n serve para pular linha

    areaSala = 10*10;
    printf("area da sala e %i \n", areaSala);

    areaQuarto = 5*7; 
    printf("area do quarto e %i \n", areaQuarto);

    areaQuarto = 5*7;
    printf("area do banheiro e %i \n", areaQuarto);

    areaTotal = areaSala +  areaQuarto + areaQuarto; 
    printf("area total e %i \n", areaTotal);

    system("pause");
    return 0;
}