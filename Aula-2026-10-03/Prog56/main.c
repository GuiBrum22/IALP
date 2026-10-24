 #include <stdio.h>
#include <stdlib.h>

#define ALVENARIA 0
#define VINIL     1
#define FIBRA     2
#define PLASTICO  3

int main()
{
    double* precos = (double*)malloc(sizeof(double)*4);
    precos[0] = 1500;
    precos[1] = 1100;
    precos[2] =  750;
    precos[3] =  500;
    
    for(int i = ALVENARIA ; i <= PLASTICO; i++) printf("%8.2f \n", precos[i]);

    system("pause");
    return 0;
}