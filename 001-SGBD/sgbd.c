#include <stdio.h>
#include <string.h> //libreria para tratamiento de texto

//PARAMETROS: NOMBRE DEL FICHERO Y DATO A ALMACENAR

int main(int argc, char *argv[]) // pasar datos por parametro
{
    FILE *archivo; // creamos un elemento de tipo file denominado archivo

    char *nombre = argv[1];                       // nombre del fichero primer parametro
    char *nombrearchivo = strcat(nombre, ".txt"); // concateno para crear el nombre del fichero con su extension

    char rutaarchivo[100];              // defino variable para almacenar la ruta completa
    strcpy(rutaarchivo, "DB/");         // copio "DB/" en rutaarchivo
    strcat(rutaarchivo, nombrearchivo); // concateno el nombre del archivo en rutaarchivo

    archivo = fopen(rutaarchivo, "a");   // abro fichero con paramentros: nombre del fichero y modo (si es "a" lo aniade)

    char *texto = argv[2];               // el texto a agregar al fichero se captura como segundo argumento
    fputs(strcat(texto, "\n"), archivo); // puts guarda el texto en el fichero

    fclose(archivo);                     // cerramos fichero

    return 0;

    // min18 intentar guardarlo dentro de la carpeta DB
}