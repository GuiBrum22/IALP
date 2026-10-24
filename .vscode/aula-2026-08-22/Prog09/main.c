#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float lateralSala = 11; // "float" é a variavel que lê até 6 digitos dps da virgula
    float comprimentoQuarto = 7;
    float areaSala; //int = Numero inteiro
    float areaQuarto;
    float areaTotal;


    printf("Programa para calculo de casa \n"); // o \n serve para pular linha
    areaSala = lateralSala*lateralSala;
    printf("area da sala e %f \n", areaSala); // "%f" mostra a variavel que tem virgula
    areaQuarto = ( lateralSala/2)*comprimentoQuarto; 
    printf("area do quarto e %f \n", areaQuarto);
    areaQuarto = 5*7;
    printf("area do banheiro e %f \n", areaQuarto);
    areaTotal = areaSala +  areaQuarto + areaQuarto; 
    printf("area total e %f \n", areaTotal);
    system("pause");
    return 0;
}