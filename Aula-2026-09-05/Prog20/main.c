#include <stdio.h>
#include <stdlib.h>

double valorM2 = 1500;

double valor(double area);

int main()
{
  double preco; 
  preco = valor (-20);
  printf("O valor da construcao e: %f \n", preco);

  system("pause");
  return 0;
}

double valor(double area)
{
   if(area >= 0) return valorM2 * area;
   return -1;
}