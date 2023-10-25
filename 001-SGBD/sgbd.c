#include <stdio.h>
#include <string.h> //libreria para tratamiento de texto

// ARGUMENTOS: NOMBRE DE LA BASE DE DATOS, NOMBRE DE LA TABLA Y DATO A ALMACENAR

int main(int argc, char *argv[]) // pasar datos por parametro
{
    FILE *archivo; // creamos un elemento de tipo file denominado archivo

    char *basededatos = argv[1];   // nombre de la base de datos
    char *nombrearchivo = argv[2]; // nombre de la tabla
    char *texto = argv[3];         // dato a almacenar en el fichero

    char rutaarchivo[100];                      // defino variable para almacenar la ruta completa
    strcpy(rutaarchivo, basededatos);           // copio el nombre de la base de datos en la rutaarchivo
    strcat(rutaarchivo, "-");                   // aniado guion para separar base de datos y tabla
    strcat(nombrearchivo, ".txt");              // concateo con extension .txt
    //printf(strcat(rutaarchivo, nombrearchivo)); // concateno el nombre del archivo en rutaarchivo

    archivo = fopen(strcat(rutaarchivo, nombrearchivo), "a");   // abro fichero con paramentros: nombre del fichero y modo (si es "a" lo aniade)
    fputs(strcat(texto, "\n"), archivo); // puts guarda el texto en el fichero
    fclose(archivo);                     // cierro fichero

    return 0;
}