#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int suma;
    int resta;
    int producto;
    float promedio;



    printf("Ingrese el Primer Numero:\n ");
    scanf("%d",&numeroUno);

    printf("Ingrese el Segundo Numero:\n");
    scanf("%d",&numeroDos);

    suma=numeroUno + numeroDos;

    printf("La suma de los numeros : %d\n",suma);

    resta=numeroDos-numeroUno;

    printf("La resta de los numeros : %d\n",resta);

    producto=numeroUno*numeroDos;

    printf("El producto de los numeros : %d\n",producto);

    promedio= (float)suma/2;

    printf("El promedio de los numeros : %.2f\n",promedio);

    return 0;
}
