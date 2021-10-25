#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro
 y un carácter como segundo y devuelva la cantidad de veces que ese carácter aparece en la cadena *
*/

int contarCaracteres(char cadena[], char caracter);

int main()
{
    char nombreIngresado[29];
    int cantidad;

    printf("Ingrese nombre: ");

    gets(nombreIngresado);

    cantidad=contarCaracteres(nombreIngresado, 'c');

    printf("El caracter ingresado aparece: %d veces. ", cantidad);

    return 0;
}

int contarCaracteres(char cadena[], char caracter)
{
    int todoOk = 0;
    int tamanio;

    if(cadena != NULL)
    {
        tamanio=strlen(cadena);

        for(int i = 0; i < tamanio; i++)
        {
            if(cadena[i] == caracter || cadena[i] == caracter - 32)
            {
                todoOk++;
            }
        }
    }

    return todoOk;
}

