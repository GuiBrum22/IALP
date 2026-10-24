#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double raioPiscina = 2;
    double pi = 3.14159;
    double areaPiscina;

    pi=12; // erro proposital, o codigo le o ultimo valor
    areaPiscina = pi * raioPiscina * raioPiscina;
    printf ("A area da piscina e %f \n", areaPiscina); // printf é "escreva tal coisa" (area da piscina) e, f% é a variavel do numero, n/ pula linha e areaPiscina é o tal numero.
   
    system ("pause");
    return 0;



}