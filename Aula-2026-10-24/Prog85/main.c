#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float peso;
    int altura;//altura em cm
    float IMC;


    printf("Programa para calcular o IMC(indice de massa corporal)\n");
    printf("Digite o peso em kg e altura em cm: ");
    scanf("%f %i", &peso, &altura);
    if (peso <= 0 || altura <= 0) printf("Peso ou altura invalido!\n");
    else
    {
        IMC = 10000 * peso / altura / altura;
        printf("O IMC e: %.2f\n", IMC);
    }

    system("pause");
    return 0;
}