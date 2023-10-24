#include <stdio.h>

int main()
{
    FILE *archivo;                           // creamos un elemento de tipo file denominado archivo
    archivo = fopen("basededatos.txt", "w"); // abrimos fichero con paramentros: nombre del fichero y modo
    char *texto = "SGBD";
    fputs(texto, archivo); // puts guarda el texto en el fichero
    fclose(archivo);       // cerramos fichero
    printf("SGBD");
    return 0;
}