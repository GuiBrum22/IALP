#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE  1

const int ALVENARIA = 0,
          VINIL     = 1, 
          FIBRA     = 2, 
          PLASTICO  = 3;

typedef int bool; //typedef <tipo de dado/estrutura> <novo nome>

double valorM2 = 1500;

/* -------- Prototipo das funcoes ---------*/
void areaCasa(float lateralSala, float comprimentoQuarto);
double areaCalculadaPiscina(double raioPiscina);
double valor(double area);
double valorPiscina(double area, int material);

int main(void)
{
    double preco;
    bool valorOK = FALSE;

    areaCasa(11, 7);

    preco = valor(20);
    valorOK = preco >= 0;

    if(valorOK) printf("O valor da construcao e: R$ %.2f \n \n", preco);
    else printf("O valor da area e negativo \n");

    printf("A piscina tem uma area de: %f m2 \n", areaCalculadaPiscina(2));
    printf("E ira custar R$ %.2f \n", valorPiscina(areaCalculadaPiscina(2), ALVENARIA));

    system("pause");
    return 0;
}

/* -------- Corpo das funcoes ------------*/
void areaCasa(float lateralSala, float comprimentoQuarto)
{
    
    float areaSala;
    float areaQuarto;
    float areaTotal;

    if(lateralSala >= 0 && comprimentoQuarto >= 0) 
    {
        printf("Programa para calculo de area da casa \n");
        areaSala = lateralSala*lateralSala;
        printf("A area da sala e %f \n", areaSala);
        areaQuarto = (lateralSala/2)*comprimentoQuarto;
        printf("A area do quarto e %f \n", areaQuarto);

        printf("A area do banheiro e %f \n", areaQuarto);
        areaTotal = areaSala + 2*areaQuarto;
        printf("A area total e %f \n\n", areaTotal);      
    } else printf("Erro: Parametro menor que zero \n");
}

double areaCalculadaPiscina(double raioPiscina)
{
    return raioPiscina >= 0 ? M_PI * pow(raioPiscina, 2) : -1 ;
}

double valor(double area)
{
    if(area >= 0) return valorM2 * area;
    return -1; 
}

double valorPiscina(double area, int material)
{
    double valor;
    switch (material)
    {
    case 0: valor = 1500;
            break;
    case 1: valor = 1100;
            break;
    case 2: valor = 700;
            break;
    case 3: valor = 500;
            break;                                                            
    default:valor = -1;
    }
    
    return area * valor;
}