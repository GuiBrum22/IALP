#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double raioPiscina = 2;
    double areaPiscina;

    areaPiscina = M_PI * pow(raioPiscina, 2);
    printf("A area da piscina e %f \n", areaPiscina);

    system("pause");
    return 0;
}
 