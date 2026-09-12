#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE  1

typedef int bool; //typedef <tipo de dado/estrutura> <novo nome>

double valorM2 = 1500;

/* -------- Prototipo das funcoes ---------*/
void areaCasa(float lateralSala, float comprimentoQuarto);
double areaCalculadaPiscina(double raioPiscina);
double valor(double area);

int main(void)
{
    double preco;
    bool valorOK = FALSE;

    areaCasa(11, 7);

    preco = valor(20);
    valorOK = preco >= 0;

    if(valorOK) printf("O valor da construcao e: %f \n \n", preco);
    else printf("O valor da area e negativo \n");

    printf ("A piscina tem uma area de: %f m2 \n", areaCalculadaPiscina(2));

    

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
    double resposta;
    resposta = raioPiscina >= 0 ? M_PI * pow(raioPiscina, 2) : -1 ;
    return resposta;
}

double valor(double area)
{
    if(area >= 0) return valorM2 * area;
    return -1; 
}