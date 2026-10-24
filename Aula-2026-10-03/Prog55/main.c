#include <stdio.h>
#include <stdlib.h>

#define ALVENARIA 0
#define VINIL     1
#define FIBRA     2
#define PLASTICO  3

int main()
{
    double precos[] = {1500, 1100, 750, 500};
    for(int i = ALVENARIA ; i <= PLASTICO; i++) printf("%8.2f \n", precos[i]);

    system("pause");
    return 0;
}