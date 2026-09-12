#include <stdio.h>
#include <stdlib.h>

double valorM2 = 1500;

double valor(double area);

int main()
{
  double preco; 
  preco = valor (20);
  if(preco >=0)("O valor da construcao e: %f \n", preco);
  else printf("O valor da area e negativo \n");

  system("pause");
  return 0;
}

double valor(double area)
{
   if(area >= 0) return valorM2 * area;
   return -1;
}