#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    char nomeMaterial[4][10] = {{'A', 'l', 'v', 'e', 'n', 'a', 'r', 'i', 'a', '\0'},
                            {'V', 'i', 'n', 'i', 'l', '\0'},
                            {'F', 'i', 'b', 'r', 'a', '\0'},
                            {'P', 'l', 'a', 's', 't', 'i', 'c', 'o', '\0'}};
    
    char** nomesDosMateriais = (char**)malloc(sizeof(char*) * 4);
    nomesDosMateriais[0] = (char*)malloc(sizeof(char) * 10);
    nomesDosMateriais[1] = (char*)malloc(sizeof(char) * 6);
    nomesDosMateriais[2] = (char*)malloc(sizeof(char) * 6);
    nomesDosMateriais[3] = (char*)malloc(sizeof(char) * 9);

    for (int x = 0; x <= 3; x++)
    {
        int y = -1;
        do
        {
            y++;
            nomesDosMateriais[x][y] = nomeMaterial[x][y];
        } while (nomeMaterial[x][y] != '\0');
    }

    for (int x = 0; x <= 3; x++) printf("Piscina de %s \n", nomesDosMateriais[x]);

    system("pause");
    return 0;
}