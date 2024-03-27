#include <stdio.h>
#include "functions.h"
#define MAX_AGE 100
#define MIN_AGE 0
#define MAJEUR 18

// Afficher un résultat
void afficher_resultat(int x)
{
    printf("le résultat est de : %d\n",x);
}

// Retourner la somme
int calculer_somme(int x, int y)
{
    return x + y;
}

// Test si majeur
int est_majeur(int age)
{
    if(age >= MAJEUR && age <= MAX_AGE)
    return 1;
else if(age < MAJEUR && age > MIN_AGE)
    return 0;
else 
    return -1;
}

// Affiche l'age
void afficher_age(int age)
{
    if (est_majeur(age) == 1)
        printf("%d : majeur\n", age);
    else if (est_majeur(age)== 0)
        printf("%d : mineur\n", age);
    else
        printf("%d : erreur\n", age);

}

// Compare si x > y
int est_plus_grand(int x, int y)
{
    if (x > y)
        return 1;
    else
        return 0;

}

// Compare si x < y
int est_plus_petit(int x, int y)
{
    if (x < y)
        return 1;
    else 
        return 0;
}
























void afficherDepartement(int t[], int len)
{
    int i = 0;
    for(int i = 0; i < len; i++){
        printf("[%i] ", t[i]);
    }


}


int lenght(int t[])
{
    int len = 0;
    for(int i = 0; t[i] != '\0'; i++){
        len ++;
    }
    return len;
}


int add_value(int t[]){
   
    int x;
    for(int i = 0; i < len(t) && t[i] != '\0'; i = i+1){
       


        printf("Type a number : \n");


        scanf("%i", &x);


        printf("Your number is : %d\n", x);


    }


    t[len(t)]  = x;
    t[len(t)+1] = '\0';


    afficherDepartement(t, sizeof(t) / sizeof(t[0]));
}
