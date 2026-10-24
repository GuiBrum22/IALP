#include <stdio.h>
#include <stdlib.h>

char nomeMaterial[4][10] = {{'A', 'l', 'v', 'e', 'n', 'a', 'r', 'i', 'a', '\0'},
                            {'V', 'i', 'n', 'i', 'l', '\0'},
                            {'F', 'i', 'b', 'r', 'a', '\0'},
                            {'P', 'l', 'a', 's', 't', 'i', 'c', 'o', '\0'}};

int main(void)
{
    printf("Material 1: %s\n", nomeMaterial[1]);
    printf("%c\n", nomeMaterial[3][6]);

    system("pause");
    return 0;
}