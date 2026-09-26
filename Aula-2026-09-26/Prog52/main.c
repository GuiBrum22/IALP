#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* endereco3 = (int*)malloc(sizeof(int));
    /*
    void* malloc(unsigned int size) 
    o void está só para dizer que pode ser qualquer tipo de variavel
    malloc - pede para o sistema operacional amazenar o valor na memória 
    unsigned int size - devemos indicar quantos byte são necessários para armazenar  a variavel que esta dentro do parentes, no caso int
    */
    *endereco3 = 13;
    printf("O valor do endereco3: %p \n", endereco3);
    printf("O endereco do endereco3: %p \n", &endereco3);
    printf("O conteudo apontado pelo endereco3: %i \n", *endereco3);
    free(endereco3); // libera a memória alocada
    system("pause");
    return 0;
}