#include <stdio.h>
#include <stdlib.h>


typedef struct auxiliarPessoa
{
    int CPF;
    struct auxiliarPessoa* conjuge;
}Pessoa;

int main()
{
    Pessoa p1; 
    p1.CPF = 123456789;//PARA ACESSAR VARIAVEL UTILIZAMOS O PONTO

    Pessoa* p2 = (Pessoa*)malloc(sizeof(Pessoa));//PARA ACESSAR VARIAVEL UTILIZAMOS O PONTEIRO
    p2->CPF = 987654321;//para acessar o campo de memoria utilizamos o operador "->" que é o mesmo que (*p2).CPF

    Pessoa p3;
    p3.CPF = 111222333;

    p1.conjuge = p2;
    p2 ->conjuge = &p1; //&p1 encereco de memoria de p1
    p3. conjuge = NULL; // podemosusar NULL para indicar que a pessoa não tem conjuge, devido a biblioteca stdlib.h


    system("pause");
    return 0;
}