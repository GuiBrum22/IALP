#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main(void)
{
    /*variaveis do Prog09*/
    float lateralSala = 11;
    float comprimentoQuarto = 7;
    float areaSala;
    float areaQuarto;
    float areaTotal; 

    /*variaveis do Prog14*/
    double raioPiscina = 2;
    double areaPiscina;

    /*codigo do Prog09*/
    printf("Programa para calculo de area da casa \n");
    areaSala = lateralSala*lateralSala;
    printf("A area da sala e %f \n", areaSala); 
    areaQuarto = (lateralSala/2)*comprimentoQuarto;
    printf("A area do quarto e %f \n", areaQuarto);
    printf("A area do banheiro e %f \n", areaQuarto);
    areaTotal = areaSala + 2*areaQuarto;
    printf("A area Total e %f \n", areaTotal);

    /*codigo do Prog14*/
     areaPiscina = M_PI * pow(raioPiscina, 2); 
    printf ("a area da piscina e %f \n", areaPiscina);

    system("pause");
    return 0;

}