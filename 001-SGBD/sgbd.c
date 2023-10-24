#include <stdio.h>
#include <string.h> //librería para tratamiento de texto

int main(int argc, char *argv[]) // pasar datos por parametro
{
    FILE *archivo;                           // creamos un elemento de tipo file denominado archivo
    archivo = fopen("basededatos.txt", "a"); // abrimos fichero con paramentros: nombre del fichero y modo (si es "a" lo aniade)
    char *texto = argv[1];                   // el texto se captura como primer argumento
    fputs(strcat(texto, "\n"), archivo);     // puts guarda el texto en el fichero
    fclose(archivo);                         // cerramos fichero
    return 0;
}