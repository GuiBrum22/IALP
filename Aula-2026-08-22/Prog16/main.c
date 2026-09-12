#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/*----Prototipo das funcoes----*/
void areaCasa(void);
double areaCalculadaPiscina(void);

int main(void)
{
    double areaPiscina;
    areaCasa();/*chama a função area casa*/
    areaPiscina = areaCalculadaPiscina();
    printf("A area da piscina e %f \n", areaPiscina);

    system("pause");
    return 0;
}

/*----Corpo das funcoes----*/
void areaCasa(void)/*funcao*/
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
}

double areaCalculadaPiscina(void)
{
    double raioPiscina = 2;
    return M_PI * pow(raioPiscina, 2);
} 