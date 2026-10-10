#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4

double media (double* arranjo);

int main(void)
{
    double* valorMaterialpiscina = (double*)malloc(sizeof(double)*TAMANHO);
    valorMaterialpiscina[0] = 1500;
    valorMaterialpiscina[1] = 1100; 
    valorMaterialpiscina[2] = 750;
    valorMaterialpiscina[3] = 500;

       
    printf("%8.2f \n", media);

    system("pause");
    return 0;
}

double media (double* arranjo){
    double resposta = 0;
    for(int i = 0; i < TAMANHO; i++) resposta += arranjo[i];
    resposta /= TAMANHO;
    return resposta;
}