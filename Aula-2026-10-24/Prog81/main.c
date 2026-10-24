#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct auxiliarCasa
{
    float lateralSala;
    float comprimentoQuarto;
}Casa;

void areaCasa(Casa sCasa);
Casa iniciaCasa(float lateralSala1, float comprimentoQuarto1);

int main(void)
{
    Casa c1 = iniciaCasa(11, 7);

    areaCasa(c1);

    system("pause");
    return 0;
}

void areaCasa(Casa sCasa)
{
    float areaQuarto;
    float areaSala;
    float areaTotal;
    if(!(sCasa.lateralSala > 0 && sCasa.comprimentoQuarto > 0)) printf("Erro de parametro menor que zero \n");
    else
    {
        printf("Programa para calculo da area da casa \n");
        areaSala = pow(sCasa.lateralSala,2);
        printf("A area da sala e: %.2f m2\n", areaSala);
        areaQuarto = sCasa.comprimentoQuarto * (sCasa.lateralSala / 2);
        printf("A area do quarto e: %.2f m2\n", areaQuarto);
        printf("A area do banheiro e: %.2f m2\n", areaQuarto);
        areaTotal = areaSala + 2 * areaQuarto;
        printf("A area total da casa e: %.2f m2\n", areaTotal);
    }
}
Casa iniciaCasa(float lateralSala1, float comprimentoQuarto1)
{
    Casa resposta;
    resposta.lateralSala = lateralSala1;
    resposta.comprimentoQuarto = comprimentoQuarto1;
    return resposta;
}