#include <stdio.h>
#include <stdlib.h>

int main()
{
   int variavel1 = 27;//*declaração de uma variável do tipo inteiro
   int*endereco1 = &variavel1;//o & é para pegar o endereço da variavel
   printf("O valor da variavel1 e: %i \n", variavel1);
   printf("O endereco da variavel1 e: %p \n", &variavel1);
   printf("O valor do endereco1 e: %p \n", endereco1);
   printf("O endereco do endereco1 e: %p \n", &endereco1);

    system("pause");
    return 0;
}