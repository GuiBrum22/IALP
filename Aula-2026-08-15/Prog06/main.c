#include <stdio.h>
#include <stdlib.h>

int main()
{
int areaSala;
int areaQuarto;

int areaTotal;

printf("programa para calcular a area da casa \n");
areaSala = 10*10;
printf("A area da sala e %i \n" , areaSala);
areaQuarto = 5*7;
printf("A area do quarto e %i \n" , areaQuarto);

printf("A area do banheiro e %i \n" , areaQuarto);
areaTotal = areaSala + areaQuarto + areaQuarto;
printf("A area total e %i \n" , areaTotal);

system("pause");
return 0;
}