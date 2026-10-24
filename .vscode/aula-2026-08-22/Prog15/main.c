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

    /*Variaveis do Prog14*/
    double raioPiscina = 2;
    double areaPiscina;

    /*codigo Prog09*/
    printf("Programa para calculo de casa \n"); // o \n serve para pular linha
    areaSala = lateralSala*lateralSala;
    printf("area da sala e %f \n", areaSala); // "%f" mostra a variavel que tem virgula
    areaQuarto = ( lateralSala/2)*comprimentoQuarto; 
    printf("area do quarto e %f \n", areaQuarto);
    areaQuarto = 5*7;
    printf("area do banheiro e %f \n", areaQuarto);
    areaTotal = areaSala +  areaQuarto + areaQuarto; 
    printf("area total e %f \n \n", areaTotal);


    /*codigo do Prog14*/
     areaPiscina = M_PI * pow(raioPiscina, 2); // 'pow'função matematica de potencia
    printf("A area da piscina e %f \n ", areaPiscina); // printf é "escreva tal coisa" (area da piscina) e, f% é a variavel do numero, n/ pula linha e areaPiscina é o tal numero.
   
    system ("pause");
    return 0;


}