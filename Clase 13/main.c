#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct


{
    char producto;
    int id[4];
    char nombre[10][30];
    int precio[10];
    int stock;
    char descripcion[10][30];

}Eproducto;

typedef struct
{
    int id;
    char nombre;
    char localidad;

}Eproveedor;

void CargarProductos(Eproducto listaProductos, int cantidadPRod);
void CargarProveedor(Eproveedor listaProveedor, int cantidadPRod);
void mostrarProveedores(Eproveedor listaProveedor, int cantidadPRod);



int main()
{

    Eproducto producto[10];
    Eproveedor proveedor[4];
    int id;

    mostrarProveedores(proveedor,4);

    return 0;
}

void CargarProductos(Eproducto listaProductos, int cantidad)
{
    int id[]={1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]={{"detergente"},{"galletitas"},{"gaseosa"},{"alfajor"},{"lavandina"},{"jugo"},{"jabon"},{"gelatina"},{"alfajor"},{"desodorante"}};
    char descripcion[10][30]={"limpieza"},{"comestible"},{"bebida"},{"comestible"},{"limpieza"},{"bebida"},{"limpieza"},{"comestible"},{"comestible"},{"limpieza"};
    float precios[10]={30,50,100,65,70,70,30,90,55,150};
    int i;


    for(i=0; i < cantidad ; i++)
    {
        listaProductos[i].id= id[i];

        strcpy(listaProductos[i].nombre, nombres[i]);
        strcpy(listaProductos[i].descripcion, descripcion[i]);
        listaProductos.precio[i= precios[i];

    }


}

void CargarProveedor(Eproveedor listaProveedor, int cantidad)
{

    int id[]={1,2,3,4};
    char nombres[4][30]={{"jose"},{"mario"},{"daniel"},{"leandro"};
    char localidad[4][30]={{"Quilmes"},{"Lanus"},{"Avellaneda"},{"Berazategui"};
    int i;

    for(i=0; i< cantidad ; i++)
    {
        listaProveedor[i].id=id[i];
    }




}

void mostrarProveedores(Eproveedor listaProveedor, int cantidadPRod)
{

    int i;

    for(i=0; i<cantidad ; i++)
    {

        printf("Id = %d" , listaProveedor[i].id);
        printf("nombre= %s ", listaProveedor[i].nombre);
        printf("Localidad: %s", listaProveedor[i].localidad);

    }


}


