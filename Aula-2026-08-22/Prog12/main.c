#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159 /*isso seria o valor definitivo do PI*/

int main(void)
{
    double raioPiscina = 2;
    
    double areaPiscina;
    
    /* ("PI = 12;") variável, está fora do q foi definido */
    areaPiscina = PI * raioPiscina * raioPiscina;
    printf("A area da piscina e %f \n", areaPiscina);


    system("pause");
    return 0;
} 