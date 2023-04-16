#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    FILE *archivo;
    archivo =fopen ("output.txt", "wt");
    fputs("Hola Mundo \n", archivo);
    fclose(archivo);
    return 0;
}