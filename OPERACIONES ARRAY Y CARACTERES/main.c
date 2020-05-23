#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 4
#include <string.h>

void ArrayFuncion(int arrayVector[]);
void mostrar(int arrayVector[]);
void OrdenarNumeros(int arrayVector[]);
void OrdenarLetras(int arrayVector[])



int main()
{
    // HARCODEAMOS DATOS Y MOSTRAMOS


    char nombre1[15]={"hernan"};
    char nombre2[15]={"ariel"};
    int vector[CANTIDAD]= {1,2,3,1};
    int numeros[10]={1,5,6,4,8,2,15,3,48,12}; //para ORDENAR
    int otroVector[2];
    int i;

    // ORDENAMOS NUMEROS

    OrdenarNumeros(numeros);

    for(i=0; i<10 ; i++)
    {
          printf("***  %d",numeros[i]); // MOSTRAMOS NUMEROS ORDENADOS
    }




    printf("\nEl valor de la posicion 2 : %d ", vector[2]);

    for(int i=0; i<CANTIDAD ; i++)
    {
        printf("\n%d",vector[i]);
    }

    // EL USUARIO LE DA VALORES AL VECTOR Y MOSTRAMOS

    for(int i=0 ; i< CANTIDAD ; i++)
    {
        printf("\nDarle valor al vector en la posicion: %d = ",i);
        scanf("%d",&vector[i]);
    }

    for(int i=0 ; i< CANTIDAD ; i++)
    {
        printf("\nValores del vector Pos./%d/ = %d",i,vector[i]);
    }

    //USAMOS FUNCIONES

    ArrayFuncion(otroVector);
    mostrar(otroVector);

    system("pause");
    return 0;
}

void ArrayFuncion(int arrayVector[])
{

    for(int i=0 ; i< 2 ; i++)
    {

        printf("\nIntroduce valores para el vector usando funciones = ");
        scanf("%d",&arrayVector[i]);
    }

}

void mostrar(int arrayVector[])
{
    for(int i=0 ; i< 2 ; i++)
    {
        printf("\n%d",arrayVector[i]);

    }

}
void OrdenarNumeros(int arrayVector[])
{
    int i;
    int j;
    int aux;

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10 ; j++)
        {
            if(arrayVector[i] > arrayVector[j])
            {
                aux= arrayVector[i];
                arrayVector[i]= arrayVector[j];
                arrayVector[j]= aux;
            }
        }
    }
}

void OrdenarLetras(char nombre[])
{
    int i;
    int j;
    int aux;
    char nombre[]

    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10 ; j++)
        {
            if(strcmp(nombre[i] ,nombre[j]) > 0 )
            {
                strcpy((nombre))
            }
        }
    }
}










