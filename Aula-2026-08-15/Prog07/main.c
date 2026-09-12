#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lateralSala = 10;
    int comprimentoQuarto = 7;
int areaSala;
int areaQuarto;
int areaTotal;

printf("programa para calcular a area da casa \n");
areaSala = lateralSala*lateralSala;
printf("A area da sala e %i \n" , areaSala);
areaQuarto = (lateralSala/2)*comprimentoQuarto;
printf("A area do quarto e %i \n" , areaQuarto);

printf("A area do banheiro e %i \n" , areaQuarto);
areaTotal = areaSala + areaQuarto + areaQuarto;
printf("A area total e %i \n" , areaTotal);

system("pause");
return 0;
}