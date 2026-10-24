#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("programa para dimensionamento\n"); 


    float raio = 5;
    float altura = 20;
    float volume;

    volume = M_PI*pow(raio, 2)*altura;
    printf("o volume da garrafa e de %f cm3\n \n", volume);


    /*-CAIXA A-*/

    printf("as dimensoes da caixa A sao\n"); 
    printf("largura A = 10\n");
    printf("comprimento A = 10\n");
    printf("altura A = 20\n \n");

    float largura_A = 10 - 0.6;
    float comprimento_A = 10 - 0.6;
    float altura_A = 20 - 0.6;
    float volume_A;

    volume_A = largura_A*comprimento_A*altura_A;
    printf("volume da caixa A e de %f cm3\n \n", volume_A);

    /*-CAIXA B-*/

    printf("as dimensoes da caixa B sao\n"); 
    printf("largura B = 12\n");
    printf("comprimento B = 12\n");
    printf("altura B = 22\n \n");

    float largura_B = 12 - 0.6;
    float comprimento_B = 12 - 0.6;
    float altura_B = 22 - 0.6;
    float volume_B;

    volume_B = largura_B*comprimento_B*altura_B;
    printf("volume da caixa B e de %f cm3\n \n", volume_B);


    /*-VIABILIDADE-*/
    
    printf("caixa A e inviavel pois sua a altura e sua largura sao menores do que a do produto\n");
    printf("a caixa B e a unica opcao viavel\n");

    printf("em um espaco de 55 cm cabem %i caixas \n", 55/12);
    printf("o espaco restante no container e de %i cm \n", 55-48);

    system("pause");
    return 0; 

    

}