#include <stdio.h>
#include <stdlib.h>

int main()
{
    double precos[] = {1500, 1100, 750, 500};
    for(int i = 0 ; i <= 3; i++) printf("%8.2f \n", precos[i]);

    system("pause");
    return 0;
}