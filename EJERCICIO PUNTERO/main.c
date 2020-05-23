#include <stdio.h>
#include <stdlib.h>
/*Actividad: Realicen una funcion que reciba como parametro un entero,
 lo modifique, y retorne si pudo realizar la modificacion o no*/




int entero(int* a);
int main()
{
   int a=8;


entero(&a);

   printf("a=%d",a);


   if(a==8)
   {
        printf("\nSigue con el mismo valor");

   }
   else
   {
       printf("\nSe modifico");
   }

   return 0;
}


int entero(int* a)
{
    int z=9;

    z = *a;
    *a = z;

}
