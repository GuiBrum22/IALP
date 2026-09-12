#include <stdio.h>
#include <stdlib.h>

double valorM2 = 1500;

double valor( double area);

int main()
{
    double preco;
    int valorOK = 0;

    preco = valor(20);
    valorOK = preco >= 0;
        
    if(valorOK) printf("o valor da construcao e: %f \n", preco);
    else printf("o valor da  area e negativo \n");
    
  system("pause");
    return 0;
}

double valor (double area)
{
    if(area >= 0) return valorM2 * area; // precisa abrir chave apenas se tiver mais que uma instrucao
    return -1;
}