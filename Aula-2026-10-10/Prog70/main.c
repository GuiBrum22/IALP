#include <stdio.h>
#include <stdlib.h>

char nomeVinil[] = {'V', 'i', 'n', 'i', 'l', '\0'};

int main(void)
{
    printf("Caractere: %c \n", nomeVinil[1]);
    nomeVinil[1] = 'c';
    printf("Material: %s \n", nomeVinil);

    system("pause"); 
    return 0;
}