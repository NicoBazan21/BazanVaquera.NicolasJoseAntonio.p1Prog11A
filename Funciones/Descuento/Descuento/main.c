#include <stdio.h>
#include <stdlib.h>

/*
 Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
 y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.
*/

float aplicarDescuento(float precio);

int main()
{
    float precio = 50;
    float precioTotal;

    precioTotal=aplicarDescuento(precio);

    printf("El precio %.2f con un descuento del 5 porciento es: %.2f", precio, precioTotal);

    return 0;
}

float aplicarDescuento(float precio)
{
    float precioTotal;

    if(precio > 0)
    {
        precioTotal=precio-(precio*5/100);
    }

    return precioTotal;
}
