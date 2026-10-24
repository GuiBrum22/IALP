#include <stdio.h>
#include <stdlib.h>


float valorArea(float comprimento, float largura, float altura);

int main(void)
{
    char nomeMaterial[4][12] = {{'C', 'o', 'm', 'u', 'm', ' ', ' ', ' ', ' ', ' ', ' ', '\0'},
                                {'R', 'e', 'f', 'o', 'r', 'c', 'a', 'd', 'o', ' ', ' ','\0'},
                                {'I', 'm', 'p', 'e', 'r', 'm', 'e', 'a', 'v', 'e', 'l', '\0'},
                                {'T', 'e', 'r', 'm', 'i', 'c', 'o', ' ', ' ', ' ', ' ', '\0'}};
    

    double* valorMaterialCaixa = (double*)malloc(sizeof(double)*4);
    valorMaterialCaixa[1] = 10.00;
    valorMaterialCaixa[2] = 15.00; 
    valorMaterialCaixa[3] = 20.00;
    valorMaterialCaixa[4] = 25.00;
    float custoTotal;
    float comprimento = -2,
          largura = 1,
          altura = 1;

    printf("Programa de Calculo\n\n");

    if(valorArea(comprimento, largura, altura) > 0)
    {

    printf(" Area e: %.2f\n\n", valorArea(comprimento, largura, altura));

    
    printf("Material \t Tarifa/m2 \t Custo Total \n");
    
    
    for(int i = 1; i < 5; i++)
    {
        custoTotal = valorArea(comprimento, largura, altura) * valorMaterialCaixa[i];
        printf("%s\t %9.2f\t %11.2f\n", nomeMaterial[i-1], valorMaterialCaixa[i], custoTotal);
    }
}
        

    system("pause");
    return 0;
}

float valorArea(float comprimento, float largura, float altura)
{
    float area;
    if(comprimento <= 0 || largura <= 0 || altura <= 0)
    {
        printf("Erro, numero tem que ser maior que zero");
        return -1;
    }
    else {
        area = 2*(comprimento*largura + comprimento*altura + largura*altura);
        return area;
    };
}