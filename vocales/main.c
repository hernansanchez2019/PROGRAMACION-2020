#include <stdio.h>
#include <stdlib.h>




int main()
{

    char palabra [5];
    int conta =0;
    int conte =0;
    int conti =0;
    int conto =0;
    int contu =0;
    int total ;
    int i;


  printf("ingrese su palabra: ");
    fflush(stdin);
    gets(palabra);

   for (i=0 ; i < 5 ;i++)
    {


        switch (palabra[i])

        {   case 'a' :
            conta++;
            break;

            case 'e' :
            conte++;
            break;

            case 'i' :
            conti++;
            break;

            case 'o' :
            conto++;
            break;

            case 'u' :
            contu++;
            break;

        }


    }

        total = conta + conte + conti +conto  + contu;
        printf("su palabra tiene %d total de vocales",total);
   return 0;

}
