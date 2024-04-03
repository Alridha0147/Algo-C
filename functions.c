#include <stdio.h>
#include "functions.h"
#define MAX_AGE 100
#define MIN_AGE 0
#define MAJEUR 18
#define TMAX 100

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

 // Compare si x == y
int est_egal(int x, int y)
{
    if (est_plus_grand(x,y) == 0 && est_plus_petit(x,y) == 0)
        return 1;
}

// Renvoie la plus grande valeur entre x et y
int le_plus_grand(int x, int y)
{
    if(est_plus_grand(x,y)== 1)
        return x;
    else
        return y;
}

// Renvoi la plus petite valeur entre x et y
int le_plus_petit(int x, int y)
{
    if(est_plus_petit(x,y)== 1)
        return x;
    else
        return y;
}

int est_impaire(int x)
{
    return x % 2;
}

int multiple(int x, int y)
{
    int a = 0;
    while(a <= y)
    {
        printf("%d\n", a);
        a += x;
    }
}

int somme (int n)
{
    int sum = 0;
    int i = 0;

    while(i<=n) 
    {
        sum = sum + i;
        i = i + 1;
    }
    return sum;
}

int factorielle (int n)
{
    if (n > 0)
        return n * factorielle(n - 1);
    else 
        return 1;
}

void afficherDepartement(int t[], int len)
{
    int i = 0;
    for(int i = 0; i < len; i++){
        printf("[%i] ", t[i]);
    }


}


int length(int t[])
{
    int len = 0;
    for(int i = 0; t[i] != '\0'; i++)
    {
        len ++;
    }
    return len;
}


int add_value(int t[])

{
   
    int x;
    for(int i = 0; i < length(t) && t[i] != '\0'; i = i+1)
    
    {
        printf("Type a number : \n");


        scanf("%i", &x);


        printf("Your number is : %d\n", x);


    


    t[length(t)]  = x;
    }


    t[length(t)+1] = '\0';

 afficherDepartement(t, sizeof(t) / sizeof(t[0]));

}
