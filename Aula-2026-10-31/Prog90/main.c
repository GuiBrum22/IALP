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