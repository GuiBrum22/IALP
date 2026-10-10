#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char* nomeVinil = (char*)malloc(sizeof(char)*6);
    nomeVinil[0] = 'V';
    nomeVinil[1] = 'i';
    nomeVinil[2] = 'n';
    nomeVinil[3] = 'i';
    nomeVinil[4] = 'l';
    nomeVinil[5] = '\0';

    printf("Material: %s \n", nomeVinil);

    free(nomeVinil);
    system("pause");
    return 0;
}