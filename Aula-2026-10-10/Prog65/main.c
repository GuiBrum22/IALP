Prog65

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c;
    //Podemos armazenar qualquer letra, algarismo, 
    // pontuacao, etc;
    //2 é diferente de '2'
    //Podemos armazenar operadores tambem
    //Para o compilador entender que temos um 
    // operador, devemos por uma barra invertida antes
    /*
        \n fim de linha
        \t tabulacao
        \' aspas simples
        \\ varra invertida
    */

    c = 'a';

    if(c == 'a') printf("%c \n", c);
    // %c imprime caractere

    system("pause");
    return 0;
}