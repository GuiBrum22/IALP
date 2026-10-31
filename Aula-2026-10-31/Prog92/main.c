#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int bool;

typedef struct 
{
    int identidade;
    float media;
}Registro;

typedef struct auxiliar
{
    Registro reg;
    struct auxiliar* proximo;
}No;

typedef struct
{
    No* inicio;
    int elemento;
}Lista;

void inicializa(Lista* l);
Registro novo(int identidade, float media);
void insere(Lista*l, Registro reg);

int main(void)
{
    Lista l1;
    inicializa(&l1);

    insere(&l1, novo(4, 8.5));
    insere(&l1, novo(7, 6.5));
    insere(&l1, novo(9, 7.5));

    No* n = l1.inicio;
    while(n != NULL)
    {
        printf("Identidade: %i, Media: %.2f\n", n -> reg.identidade, n -> reg.media);
        n = n -> proximo;
    }

    system("pause");
    return 0;
}

void inicializa(Lista* l)
{
    l -> inicio = NULL;
    l -> elemento = 0;
}


Registro novo(int identidade, float media)
{
    Registro res;
    res.identidade = identidade;
    res.media      = media;
    return res;
}

void insere(Lista*l, Registro reg)
{
    No* novo = (No*)malloc(sizeof(No));
    novo -> reg = reg;
    novo -> proximo = l -> inicio;
    l -> inicio = novo;
    l -> elemento++;
}