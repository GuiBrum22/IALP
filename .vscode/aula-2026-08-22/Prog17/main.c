#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*------prototipo das funcoes-------*/
void areaCasa(float lateralSala, float comprimentoQuarto);
double areaCalculadaPiscina(double raioPiscina);

int main(void)

{
    double areaPiscina;
    areaCasa(11, 7);

    areaPiscina = areaCalculadaPiscina(2);
    printf ("A area da Piscina e %f \n", areaPiscina);

    areaCasa(10, 8);
    sareaCasa(5, 2);

    system("pause");
    return 0;
}

/*------corpo das funcoes-------*/
void areaCasa(float lateralSala, float comprimentoQuarto)
{
    
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
    printf("area total e %f \n\n", areaTotal);
    
}

double areaCalculadaPiscina(double raioPiscina)
{
    return M_PI *pow(raioPiscina, 2);     
}
