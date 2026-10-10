#include <stdio.h>
#include <stdlib.h>

int minuscula(char c);
int converteParaMinusculo(char c);

int main(void)
{
    char caractere = 'B';
    if (minuscula(caractere)) printf("Sim, %c e minusculo\n", caractere);
    else printf("Nao, %c nao e minusculo, por isto foi convertido para %c \n", caractere, converteParaMinusculo(caractere));

    system("pause");
    return 0;
}

int minuscula(char c)
{
    return (c >= 'a' && c <= 'z');
}

int converteParaMinusculo(char c)
{
    char auxiliar;
    if(c >= 'A' && c <= 'Z')
    {
        auxiliar = c + 'a' - 'A';
        return auxiliar;
    }
    return auxiliar;
    
}