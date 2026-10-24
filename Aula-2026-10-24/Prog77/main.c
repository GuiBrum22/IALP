#include <stdio.h>
#include <stdlib.h>

typedef struct auxiliar
{
    float lateralSala;
    float comprimentoQuarto;
}casa;

int main(void)
{
    struct auxiliar c1;
    casa c2; //aqui não precisa do struct devido ao typedef
    c1.lateralSala = 11;
    c2.lateralSala = 15;
    printf("A lateral da Sala 1 vale :%.2f \n", c1.lateralSala);
    printf("A lateral da Sala 2 vale:%.2f \n", c2.lateralSala);

    system("pause");
    return 0;
}