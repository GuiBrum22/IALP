#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int lateralSala = 10;
    int comprimentoQuarto = 7;
    int areaSala; //int = Numero inteiro
    int areaQuarto;
    int areaTotal;


    printf("Programa para calculo de casa \n"); // o \n serve para pular linha

    areaSala = lateralSala*lateralSala;
    printf("area da sala e %i \n", areaSala);

    areaQuarto = ( lateralSala/2)*comprimentoQuarto; 
    printf("area do quarto e %i \n", areaQuarto);

    areaQuarto = 5*7;
    printf("area do banheiro e %i \n", areaQuarto);

    areaTotal = areaSala +  areaQuarto + areaQuarto; 
    printf("area total e %i \n", areaTotal);

    system("pause");
    return 0;
}