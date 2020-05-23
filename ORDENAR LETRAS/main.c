#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[50];
      char nombre2[50];


    char i;
    char j;
    char auxInt; // SWAP
    int tam;

    printf("Ingresar nombres: ");
    fflush(stdin);
    scanf("%s",&nombre);


    printf("Ingresar nombres :");
    fflush(stdin);
    scanf("%s",&nombre2);


    for(i=0; i<tam-1; i++) //HACE UNA ITERACION, ES  -1 PARA QUE NO LLEGUE AL FINAL
    {
        for(j=i+1; j<tam; j++) // ITERA X CANTIDAD DE VECES PARA LA OTRA ITERACION, ES +1 PARA QUE SE VAYA CORRIENDO
        {
            if((nombre[i]!= -1 && nombre[j]!= -1)/* FILTRAR PARA SABER SI SON LOS DOS -1 Y EJECUTAR MAS RAPIDO*/&& nombre[i] > nombre[j])// PARA ORDENAR DE MENOR A MAYOR (>), Y DE MAYOR A MENOR (<)
            {
                auxInt=nombre[i];// SE GUARDA EL NUMERO EN EL AUXILIAR<------------------
                nombre[i]=nombre[j]; // EL NUMERO GUARDADO EN J SE LO PASAMOS A I      |
                nombre[j]=auxInt;// J GUARDA EL NUMERO GUARDADO DEL AUXILIAR<------------

            }


        }

    }

printf("%s %s",nombre,nombre2);

    return 0;
}
