#include <stdio.h>
#include <stdlib.h>

char nomeAlvenaria[] = {'A', 'l', 'v', 'e', 'n', 'a', 'r', 'i', 'a', '\0'};
char nomeVinil[] = {'V', 'i', 'n', 'i', 'l', '\0'};
char nomeFibra[] = {'F', 'i', 'b', 'r', 'a', '\0'};
char nomePlastico[] = {'P', 'l', 'a', 's', 't', 'i', 'c', 'o', '\0'};

int main(void)
{
    printf("Piscina de %s \n", nomeAlvenaria);/*%s imprime string*/
    printf("Piscina de %s \n", nomeVinil);
    printf("Piscina de %s \n", nomeFibra);
    printf("Piscina de %s \n", nomePlastico);

    system("pause");
    return 0;
}