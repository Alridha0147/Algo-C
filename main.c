#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 1
#define MAJEUR 18

//Headers

void afficher_somme(int x)
{
    printf("La somme est de : %d\n", x);
}


int calcule_somme(int x, int y)
{
    return x + y;
}

int est_majeur(int age)
{
    if(age = MAJEUR && age < MAX_AGE)
    return 1;
else if(age < MAJEUR && age > MIN_AGE)
    return 0;
else 
    return -1;
}

void afficher_age(int age)
{
    if (est_majeur(age) == 1)
        printf("%d : majeur\n", age);
    else if (est_majeur(age)== 0)
        printf("%d : mineur\n", age);
    else
        printf("%d : erreur\n", age);

}

int est_plus_grand(int x, int y)
{
    if (x > y)
        return 1;

}

int est_plus_petit(int x, int y)
{
    if (x < y)
        return 1;
}
 
int est_egal(int x, int y)
{
    if (est_plus_grand(x,y) == 0&& est_plus_petit(x,y) ==0)
        return 1;
}

int le_plus_grand(int x, int y)
{
    if(est_plus_grand(x,y)==1)
        return x;
    else
        return y;
}

int le_plus_petit(int x, int y)
{
    if(est_plus_petit(x,y)==1)
        return x;
    else
        return y;
}

int est_impaire(int x)
{
    return x % 2;
}

int main()
{
    
}