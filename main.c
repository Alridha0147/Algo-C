#include <stdio.h>
#include "functions.h"

int main()
{

    printf("Les régions françaises sont : Aura, BourgFC, Bre, CenVdL, Corse, GrdEst, HdF, ileDeFrance, Norm, NA, Occi, PdlL, PACA \n");


    int ileDeFrance[] = {75, 77, 78, 91, 92 ,93, 94, 95};  //création d'un tableau
    int BourgFC[] = {};
    int Bre[] = {};
    int CenVdL[] = {};
    int Corse[] = {};
    int GrdEst[] = {};
    int HdF[] = {};
    int Norm[] = {};
    int NA[] = {};
    int Occi[] = {};
    int PdlL[] = {};
    int PACA[] = {};
    int Aura[] = {1, 3, 4, 15, 26, 38, 42, 43, 63, 73, 74};




    printf("la liste des départements de la région Ile-de-France sont :");
   
    afficherDepartement( ileDeFrance, length(ileDeFrance));


    printf("\n");


    printf("la liste des départements de la région Auvergne-Rhône-Alpes sont :");
    afficherDepartement(Aura, sizeof(Aura) / sizeof(Aura[0]));
   
    printf("\n");

}