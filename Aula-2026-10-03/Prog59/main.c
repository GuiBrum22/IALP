#include <stdio.h>
#include <stdlib.h>

double valorMaterialpiscina[] = {1500, 1100, 750, 500};
#define TAMANHO 4

int main(void)
{
    double media = 0;
    for(int i = 0; i < TAMANHO; i++) media += valorMaterialpiscina[i];
    media /= TAMANHO;
    printf("%8.2f \n", media);

    system("pause");
    return 0;
}