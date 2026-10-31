#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int identidade;
    float media
}Registro;

Registro novo(int identidade, float media);


int main(void)
{
    

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