#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define PI 3.14159

int main(void)
{
    double raioPiscina = 2;
   
    double areaPiscina;

    //PI = 12; #define define a constante, nao deixando depois que a constantese altere, nao deixando ser igual a nada 
    areaPiscina = M_PI * raioPiscina * raioPiscina;
    printf ("A area da piscina e %f \n", areaPiscina); // printf é "escreva tal coisa" (area da piscina) e, f% é a variavel do numero, n/ pula linha e areaPiscina é o tal numero.
   
    system ("pause");
    return 0;



}