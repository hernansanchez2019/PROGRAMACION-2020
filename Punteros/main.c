#include <stdio.h>
#include <stdlib.h>

//  **************************PUNTEROS***************


/*int swap( int* a , int* b);


int main()
{
    int a= 4;
    int b=8;
    int* pEntero;
    int otraVariable= 10;

    // %p muestra valor hexadecimal
    // para pasarle otro valor al puntero debemos pasarle otra direccion de memoria
    // pEntero = NULL puntero nulo no tiene valor

    pEntero= &otraVariable; // LE PASAMOS LA DIRECCION DE MEMORIA

    swap(&a,&b); // & para pasar la direccion de memoria

    printf("A = %d ----- B = %d\n",a,b); //  intercambiamos los valores

    printf("Valor de otra variable --> %d\n",otraVariable); // VALOR
    printf("Direccion de memoria --->%d\n",&otraVariable); // DIRECCION DE MEMORIA
    printf("Valor del puntero --> %d",*pEntero ); // pEntero= &otraVariable
    *pEntero = 666; // PISAMOS EL PRIMER VALOR

    printf("\nCAMBIAMOS Valor de otra variable --> %d",otraVariable);
    printf("\nValor de puntero ---> %d ", *pEntero);

    // PEDIMOS AL USUARIO QUE LE PONGA VALOR A ESA OTRA VARIABLE A TRAVES DEL PUNTERO

    printf("\nIngrese un numero: ");
    scanf("%d", pEntero);

    printf("\nel valor de otra variable : %d", otraVariable);


    return 0;
}
int swap( int* a , int* b)
{
    int aux;

    aux = *a; // aux le pasamos el valor que apunta a
     *a  = *b; // valor que apunta a le pasamos el valor q apunta b
     *b  = aux;

}*/

 // ************  ARITMETICA DE PUNTEROS *****************



//int main()
//{

   /* float variable;
    float* miPuntero;

    miPuntero = &variable;

    printf("Variable: %d\n",&variable);
    printf("MiPuntero: %d\n", miPuntero);
    printf("MiPuntero + 1 : %d\n", &miPuntero[1]); SE DESPLAZA 4 BYTES*/


    /*float variable[5];
    float* miPuntero;
    miPuntero = &variable;

    printf("Variable: %d\n",variable);
    printf("MiPuntero: %d\n", miPuntero);*/

    /*float variable[5]={4,6,9,4,7};

    float* puntero;

    printf("%f", *puntero);
    puntero++;
    printf("%f",*puntero);*/





//}
//*************** CARGA DE NUMEROS CON VECTORES Y PUNTEROS***************************

/*void cargarArray(float*, int);
void mostrarArray(float*, int);
int main()
{
    //Aritmetica de punteros
    float variable[5];

    int i;



    cargarArray(variable, 5);
    mostrarArray(variable, 5);

    /*printf("dir variable: %d\n", variable);
    printf("dir desde el puntero: %d", miPuntero);





    return 0;
}
void cargarArray(float* vector, int sizeF)
{
    int i;
     for(i=0; i<sizeF; i++)
    {
       //*(miPuntero+i)= i+1;
       printf("Ingrese un numero: ");
       scanf("%f", (vector+i));
       //variable[i]
    }
}
void mostrarArray(float* vector, int sizeF)
{
    int i;
     for(i=0; i<sizeF; i++)
    {
        printf("%f\n", *(vector+i));
    }
}
*/

// ********************** ESTRUCTURAS CON PUNTEROS *********************************

typedef struct
{
    int a;
    char b;
} eDato;


int main()
{


   /* eDato miDato = {1,'B'};
    eDato* puntero;

    puntero = &miDato;

    printf("%d %c", puntero->a, puntero->b);
*/

    eDato miDato[2] = {{1,'B'},{1,'C'}};

    eDato* pDato;

    pDato = miDato;

    int i;
    for(i=0; i<2; i++)
    {

          printf("%d - %c\n", (pDato+i)->a,(pDato+i)->b) ;
    }



    return 0;
}



