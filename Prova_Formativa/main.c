/* quantas_caixas_cabem_no_caminhao */


#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

/*----Prototipo das funcoes----*/
double areaCalculadaCilindro(double raioCilindro, double alturaCilindro);
double areaCaixaA(double alturaCaixaA, double comprimentoCaixaA, double larguraCaixaA, double espessuraCaixaA);
double areaCaixaB(double alturaCaixaB, double comprimentoCaixaB, double larguraCaixaB, double espessuraCaixaB);
void areaCaixas(float alturaCaixa, float comprimentoCaixa, float larguraCaixa);

int main(void)
{
    double areaCilindro;
    double areaInternaCaixaA;
    double areaInternaCaixaB;
    areaCaixas(20, 10, 10);
    
    
    areaCilindro = areaCalculadaCilindro(5, 20) ;
    printf("A area do cilindro e %f \n\n", areaCilindro);
    areaInternaCaixaA = areaCaixaA(20, 10, 10, 0.6);
    printf("A area interna da caixa A e %f \n\n", areaInternaCaixaA);
    printf("Caixa A nao viavel, por causa da largura: 10 \n");
    areaInternaCaixaB = areaCaixaB(22, 12, 12, 0.6);
    printf("A area interna da caixa B e %f \n\n", areaInternaCaixaB);
    printf("Caixa B seria viavel, pois a largura e maior que a caixa A: 12 \n");

    system("pause");
    return 0;
}

/*----Corpo das funcoes----*/
void areaCaixas(float alturaCaixa, float comprimentoCaixa, float larguraCaixa)/*funcao*/
{

    float areaCaixaA;
    float areaCaixaB;
    int areaTotal;
    
    printf("programa para calculo de area das Caixas \n"); 
    areaCaixaA = alturaCaixa * comprimentoCaixa * larguraCaixa;
    printf("a area da Caixa A e %f \n", areaCaixaA);
    areaCaixaB = ( alturaCaixa + 2 ) * ( comprimentoCaixa + 2 ) * ( larguraCaixa + 2 );
    printf("a area da Caixa B e %f \n", areaCaixaB);
    areaTotal = 55 / 12;
    printf("Caberia %i \n\n", areaTotal);
    areaTotal = 55 % 12;
    printf("Sobraria %i cm \n\n", areaTotal);
}

double areaCalculadaCilindro(double raioCilindro, double alturaCilindro)
{
    return M_PI * pow(raioCilindro, 2) * alturaCilindro; 
}

double areaCaixaA(double alturaCaixaA, double comprimentoCaixaA, double larguraCaixaA, double espessuraCaixaA)
{
    return alturaCaixaA * comprimentoCaixaA * larguraCaixaA - espessuraCaixaA;   
}

double areaCaixaB(double alturaCaixaB, double comprimentoCaixaB, double larguraCaixaB, double espessuraCaixaB)
{
    return alturaCaixaB * comprimentoCaixaB * larguraCaixaB - espessuraCaixaB;   
}