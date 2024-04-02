#include <stdio.h>
#include "functions.h"

int main()
{
    printf("Hello World ! \n");

    int ileDeFrance[] = {75, 77, 78, 91, 92 ,93, 94, 95};  //création d'un tableau


    int aura[] = {1, 3, 4, 15, 26, 38, 42, 43, 63, 69, 73, 74};




    printf("la liste des départements de la région Ile-de-France sont :");
   
    afficherDepartement( ileDeFrance, length(ileDeFrance));


    printf("\n");


    printf("la liste des départements de la région Auvergne-Rhône-Alpes sont :");
    afficherDepartement(aura, sizeof(aura) / sizeof(aura[0]));
   
    printf("\n");

}