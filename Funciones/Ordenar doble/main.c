#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un
array de dicha estructura por marca. Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y
mostrarlos desde el main. *
*/

typedef struct{

    int id;
    char procesador[13];
    char marca[13];
    float precio;
    int isEmpty;

}eNotebook;

int mostrarUno(eNotebook lista);
int mostrar(eNotebook lista[], int tam);
int ordenar(eNotebook lista[], int tam, int criterio);

int main()
{
    eNotebook hardcodeo[5] = {
        {1000, "Amd", "Samsung", 15000, 1},
        {1001, "Intel", "Samsung", 17000, 1},
        {1002, "Amd", "Apple", 18000, 1},
        {1003, "Intel", "Huawei", 10000, 1},
        {1004, "Amd", "Samsung", 50000, 1},

    };


    mostrar(hardcodeo, 5);
    ordenar(hardcodeo, 5, 1);
    mostrar(hardcodeo, 5);


    return 0;
}

int mostrarUno(eNotebook lista)
{
    int todoOk = 0;

        printf("%d \t   %5s    %10s   %.2f \n",

               lista.id,
               lista.procesador,
               lista.marca,
               lista.precio
               );

    return todoOk;
}


int mostrar(eNotebook lista[], int tam)
{
    int todoOk = 0;
    if(lista != NULL && tam > 0)
    {
                printf("***Lista***\n");
                printf("Id\t Procesador \t Marca \t Precio \n");
        for(int i = 0; i < tam; i++)
        {
            if(lista[i].isEmpty)
            {
                mostrarUno(lista[i]);
            }
        }
        todoOk = 1;
    }
    return todoOk;
}


int ordenar(eNotebook list[], int tam, int criterio)
{
    int todoOk = 0;

    eNotebook auxiliar;

    if(list != NULL && tam > 0)
    {

        for(int i=0;i<tam-1;i++)
        {
            for(int j = i+1; j < tam; j++)
            {
                if(criterio==1 &&
                ((strcmp(list[i].marca, list[j].marca)>0) ||
                ((strcmp(list[i].marca, list[j].marca)==0) && (list[i].precio>list[j].precio))))
                {
                    auxiliar=list[i];
                    list[i]=list[j];
                    list[j]=auxiliar;

                }
                else
                {
                if(criterio==2 &&
                ((strcmp(list[i].marca, list[j].marca)<0) ||
                ((strcmp(list[i].marca, list[j].marca)==0) && (list[i].precio<list[j].precio))))
                    {
                        auxiliar=list[i];
                        list[i]=list[j];
                        list[j]=auxiliar;
                    }
                }
            }
        }

    }


    return todoOk;
}
