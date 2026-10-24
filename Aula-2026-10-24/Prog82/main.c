#include <stdio.h>
#include <stdlib.h>

typedef struct auxiliar
{
    float lateralSala;
    float comprimentoQuarto;
}Casa;

void ampliaCasa(Casa ca);

int main(void)
{
    Casa c1; //aqui não precisa do struct devido ao typedef
    c1.lateralSala       =11;
    c1.comprimentoQuarto = 7;
    printf("A lateral da Sala inicial vale :%.2f \n", c1.lateralSala);
    ampliaCasa(c1);
    printf("A lateral da Sala final vale :%.2f \n", c1.lateralSala);

    system("pause");
    return 0;
}

void ampliaCasa(Casa ca)
{
    ca.lateralSala++;
    ca.comprimentoQuarto++;
    printf("A lateral da funcao:%.2f \n", ca.lateralSala);
}