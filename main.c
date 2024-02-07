#include <stdio.h>

#define MAX_AGE 100
#define MIN_AGE 0
#define MAJEUR 18

//Headers

//Afficher un résultat
void afficher_resultat(int x)
{
    printf("le résultat est de : %d\n",x);
}

//Retourner la somme
int calculer_somme(int x, int y)
{
    return x + y;
}

//test si majeur

int est_majeur(int age)
{
    if(age >= MAJEUR && age <= MAX_AGE)
    return 1;
else if(age < MAJEUR && age > MIN_AGE)
    return 0;
else 
    return -1;
}

//affiche l'age
void afficher_age(int age)
{
    if (est_majeur(age) == 1)
        printf("%d : majeur\n", age);
    else if (est_majeur(age)== 0)
        printf("%d : mineur\n", age);
    else
        printf("%d : erreur\n", age);

}

//compare si x > y
int est_plus_grand(int x, int y)
{
    if (x > y)
        return 1;
    else
        return 0;

}

//compare si x < y
int est_plus_petit(int x, int y)
{
    if (x < y)
        return 1;
    else 
        return 0;
}
 
 //compare si x == y
int est_egal(int x, int y)
{
    if (est_plus_grand(x,y) == 0 && est_plus_petit(x,y) == 0)
        return 1;
}

//renvoie la plus grande valeur entre x et y
int le_plus_grand(int x, int y)
{
    if(est_plus_grand(x,y)== 1)
        return x;
    else
        return y;
}

//renvoie la plus petite valeur entre x et y
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

 int afficher_paires_jsq58(int x)
{
    int a = 0;
    while (a <= 58)
    {
        printf("%d\n", x);
        return a + 2;
    }
}
afficher_impaires_jsq57(int x)
{
    x = 1;
    while (x<=57)
    {
        printf("%d\n", x);
        return x + 2;
    }
}

afficher_nbres_premiers(int x)
{
    x = 0;
    while(x % x == 1 & x % 1 == x)
    {
        printf("%d\n", x);
        return x;
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

int main()
{
    int a = 11;
    int b = 10;
    int c = 5;
    
    afficher_resultat(calculer_somme(3,3));

    afficher_resultat(calculer_somme(a, b));

    afficher_age(18);
    afficher_age(17);
    afficher_age(100);
    afficher_age(101);
    afficher_age(-10);

    if(est_plus_grand(a, c) == 1)
        printf("%d est plus grand que %d\n", a,c);

    if(est_plus_petit(c,b)==1)
        printf("%d est plus petit que %d\n", c,a);
    if(est_egal(a,b)==1)
        printf("%d est égal à %d\n", a, b);

    printf("Le plus grand entre %d et %d est : %d \n", a, c, le_plus_grand(a,c));

    printf("le plus petit entre %d et %d est : %d \n", a, c, le_plus_petit(a, c));

    if(est_impaire(a) == 0)
        printf("%d est pair \n", a);
    else
        printf("%d est impaire \n", a);
    
    multiple(5,30);

    printf("La somme de 3 = %d\n" , sum(3));

}