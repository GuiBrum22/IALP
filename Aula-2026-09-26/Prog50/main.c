#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int variavel2 = 3 * 4;//multiplicação
    int* endereco2 = &variavel2;//o & é para pegar o endereço da variavel
    printf("O valor Resultante e: %i \n", *endereco2);
    system("pause");
    return 0;
}