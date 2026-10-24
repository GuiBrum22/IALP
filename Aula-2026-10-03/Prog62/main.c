#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 4

double valorMaterialpiscina[] = {1500, 1100, 750, 500};

int main()
{
    int* arranjo1 = (int*)malloc(sizeof(int)*4);
    int* arranjo2 = (int*)malloc(sizeof(int)*4);

    for(int x = 0; x <= 3; x++) arranjo1[x] = x;
    for(int x = 0; x <= 3; x++) arranjo2[x] = arranjo1[x];

    arranjo1[3] = 9;

    for(int x = 0; x <= 3; x++) printf("Arranjo1[%i] = %i\n", x,arranjo1[x]);
    for(int x = 0; x <= 3; x++) printf("Arranjo2[%i] = %i\n",x, arranjo2[x]);
 
    system("pause");
    return 0;
}