#include <stdio.h>
#include <stdlib.h>

//double valorMaterialpiscina[] = {1500, 1100, 750, 500};
#define TAMANHO 4

int main(void)
{
    double* valorMaterialpiscina = (double*)malloc(sizeof(double)*TAMANHO);
    valorMaterialpiscina[0] = 1500;
    valorMaterialpiscina[1] = 1100; 
    valorMaterialpiscina[2] = 750;
    valorMaterialpiscina[3] = 500;

    double media = 0;
    for(int i = 0; i < TAMANHO; i++) media += valorMaterialpiscina[i];
    media /= TAMANHO;
    printf("%8.2f \n", media);

    system("pause");
    return 0;
}