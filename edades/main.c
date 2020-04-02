
#include <stdio.h>
#include <stdlib.h>

int main()

{
    int edad;


    printf("Ingrese su edad : ");
    scanf("%d",&edad);


    if(edad<=12)
    {
        printf("Usted es un ninio\n");
    }
   else if(edad>12 && edad<=17)
    {
        printf("Usted es un adolescente");
    }
    else
    {
        printf("Usted es mayor de edad");
    }



    return 0;
}

