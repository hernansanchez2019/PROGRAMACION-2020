/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define T 3
typedef struct
{
    int idProducto;
    char descripcion[20];
    float precio;
    int contenido;
}eProducto;

void mostrarListadoDeProductos(eProducto lista[], int tam);
void mostrarUnProducto(eProducto unProducto);
void ordenarProductos(eProducto lista[], int tam);


int main()
{

    eProducto listaProductos[T] = {{200,"Sugus",20.36, 10},{105,"Ayudin", 110.60, 1},{110, "Coca-Cola", 110.60, 2}};

    ordenarProductos(listaProductos, T);

    mostrarListadoDeProductos(listaProductos, T);



    return 0;
}

void ordenarProductos(eProducto lista[], int tam)
{
   int i;
   int j;

   eProducto auxProducto;


   for(i=0; i<tam-1; i++)
   {
       for(j=i+1; j<tam; j++)
       {
           if(lista[i].precio < lista[j].precio)
           {
                auxProducto = lista[i];
                lista[i] = lista[j];
                lista[j] = auxProducto;
           }
           else
           {
               if(lista[i].precio == lista[j].precio)
               {
                   if(strcmp(lista[i].descripcion, lista[j].descripcion)<0)
                   {
                        auxProducto = lista[i];
                        lista[i] = lista[j];
                        lista[j] = auxProducto;
                   }
               }
           }
       }
   }


}


void mostrarListadoDeProductos(eProducto lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        mostrarUnProducto(lista[i]);
    }
}



void mostrarUnProducto(eProducto unProducto)
{
    printf("%5d %10s %8.2f %5d\n", unProducto.idProducto, unProducto.descripcion, unProducto.precio, unProducto.contenido);
}

