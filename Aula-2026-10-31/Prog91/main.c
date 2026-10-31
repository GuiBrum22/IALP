#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int identidade;
    float media;
}Registro;

Registro novo(int identidade, float media);


int main(void)
{
    Registro* cadastro = (Registro*) malloc(sizeof(Registro)*2);
    cadastro[0] = novo(4, 8.5);
    cadastro[1] = novo(7, 6.5);

    Registro* maior = (Registro*)malloc(sizeof(Registro)*3);
    maior[0] = cadastro[0];
    maior[1] = cadastro[1];
    maior[2] = novo(9, 7.5);

    free(cadastro);

    system("pause");
    return 0;
}

Registro novo(int identidade, float media)
{
    Registro res;
    res.identidade = identidade;
    res.media      = media;
    return res;
}