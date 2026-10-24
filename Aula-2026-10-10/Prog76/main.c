#include <stdio.h>
#include <stdlib.h>

struct casa
{
    float lateralSala;
    float comprimentoQuarto;
};

int main(void)
{
    struct casa c1;
    c1.lateralSala = 11;
    c1.comprimentoQuarto = 7;

    printf("Lateral da sala: %.2f\n", c1.lateralSala);
    printf("Comprimento do quarto: %.2f\n", c1.comprimentoQuarto);

    system("pause");
    return 0;
}