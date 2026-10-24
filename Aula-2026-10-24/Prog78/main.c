#include <stdio.h>
#include <stdlib.h>

typedef struct auxiliarCasa
{
    float lateralSala;
    float comprimentoQuarto;
}casa;

typedef struct auxiliarPiscina
{
    float raio;
}piscina;

typedef struct auxiliarCabana
{
    casa cas;
    piscina pis;
}cabana;

int main(void)
{
    casa c1;
    c1.lateralSala =       11;
    c1.comprimentoQuarto = 15;

    piscina p1;
    p1.raio = 3.5;

    cabana cab1;
    cab1.cas = c1;
    cab1.pis = p1;

    cab1.cas.lateralSala = 12;

    printf("A lateral da Sala 1 da cabana 1 vale :%.2f \n", cab1.cas.lateralSala);
    printf("O raio da piscina 1 da cabana 1 vale:%.2f \n", cab1.pis.raio);

    system("pause");
    return 0;
}