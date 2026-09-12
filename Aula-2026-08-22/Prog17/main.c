#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/*----Prototipo das funcoes----*/
void areaCasa(float lateralSala, float comprimentoquarto);
double areaCalculadaPiscina(double raioPiscina);

int main(void)
{
    double areaPiscina;
    areaCasa(11,7);/*chama a função area casa*/

    areaPiscina = areaCalculadaPiscina(2);
    printf("A area da piscina e %f \n", areaPiscina);

    system("pause");
    return 0;
}

/*----Corpo das funcoes----*/
void areaCasa(float lateralSala, float comprimentoquarto)/*funcao*/
{
    float areaSala;
    float areaQuarto;
    float areaTotal;
    
    printf("programa para calculo de area da casa \n"); 
    areaSala = lateralSala * lateralSala;
    printf("a area da sala e %f \n", areaSala);
    areaQuarto = (lateralSala/2)*comprimentoquarto;
    printf("a area do quarto e %f \n", areaQuarto);
    areaTotal = areaSala + 2*areaQuarto;
    printf("a area total e %f \n\n", areaTotal);
}

double areaCalculadaPiscina(double raioPiscina)
{
    return M_PI * pow(raioPiscina, 2);
} 