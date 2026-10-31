#include <stdio.h> 
#include<stdlib.h>
#include <math.h>

#define FALSE 0
#define TRUE 1
typedef int bool;

double valorM2 = 1500;

const int ALVENARIA = 0,
          VINIL     = 1,
          FIBRA     = 2,
          PLASTICO  = 3;

char nomeMaterial[4][10] =  {{'A','l','v','e','n','a','r','i','a','\0'},
                            {'V','i','n','i','l','\0'},
                            {'F','i','b','r','a','\0'},
                            {'P','l','a','s','t','i','c','o','\0'}};

double valor(double area);
double areaCasa(float lateralSala, float comprimentoQuarto);
double areaPiscina(double raio);
double valorPiscina(double area, int material);


int main()
{
    double preco;
    bool valorOK = FALSE;

    preco = valor(areaCasa(11,7));
    valorOK = preco>=0;

    if(valorOK) printf("O valor da construcao e R$ %.2f\n",preco);
    else printf("Voce digitou o valor negativo para a area \n");

    printf("Area \t Tipo      \t Valor \n");
    for(double area = 50; area <=200; area+=50) for (int tipo = ALVENARIA; tipo <= PLASTICO; tipo++)printf("%4.1f\t %9s \t %9.2f\n",area, nomeMaterial[tipo],valorPiscina(area, tipo));

    system("pause");     

    return 0;
}

double valor(double area)
{
    if(area >=0) return valorM2 * area;
    return -1;
}

double areaCasa(float lateralSala, float comprimentoQuarto)
{
    float areaSala, areaQuarto, areaTotal;
    if(!(lateralSala >=0 && comprimentoQuarto>=0)) printf("Erro: Parametro menor que zero\n");
    else
    {
        printf("Programa para calculo de area da casa \n");
        areaSala=pow(lateralSala,2);
        printf("A area da sala e: %.2f\n ", areaSala);
        areaQuarto = (lateralSala/2)*comprimentoQuarto;
        printf("A area do quarto e:  %.2f\n ", areaQuarto);
        printf("A area do banheiro e: %.2f\n ", areaQuarto);
        areaTotal = areaSala + areaQuarto;
        printf("A area total e: %.2f\n\n", areaTotal);
        
        return areaTotal;

    }
    return -1;
}

double areaPiscina(double raio)
{
    return raio >= 0 ? M_PI*pow(raio, 2): -1;
}

double valorPiscina(double area, int material)
{
    switch(material)
    {
        case 0:     return area * 1500;
        case 1:     return area * 1100;
        case 2:     return area * 750;
        case 3:     return area * 500;
        default:    return -1;
    }
}