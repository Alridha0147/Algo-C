#include <stdio.h>

#define MAX_AGE = 100
#define MIN_AGE = 1
#define MAJEUR = 18

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
    if(age>=18 & age < 100)
    return 1;
else if(age <= 17 & age > 0)
    return 0;
else 
    return 0;
}

void afficher_age(int age)
{
    if (est_majeur(age) == 1)
        printf("%d : majeur\n", age);
    else if (est_majeur(age)== 0)
        printf("%d ; mineur\n", age);
    else
        printf("%d : Erreur\n", age");

}
 
int main()
{
    int age = majeur(19); 
    afficher_age(age);
    return 0;
}

int main()
{
    int a = 6;
    int b = 24;

    afficher_somme(calcule_somme(6,24));
    afficher_somme(calcule_somme(a,b));

}

    int num = 20;
    int num2 = 40;
    float price = 10.99;

    char c = 'c';

    int algo = 15, systeme = 16, sql = 19, merise = 15;

    float moyenne; 
    int nbModule = 4;
    int total = algo + systeme + merise;
    moyenne = (float) total / nbModule;
    
    printf("Hello World %d \n", num2);


    printf("la valeur de num = %d , la valeur de num2 = %i, prix = %.2f \n", num, num2, price, c);
    num = 30;
    num2 = 40;
    c = 'a';
    
    num = num2;
        printf("new values : la valeur de num = %d , la valeur de num2 = %i, prix = %.2f, char value : %c \n", num, num2, price, c);
   
    printf("new values : la valeur de num = %d , la valeur de num2 = %d ");
    return 0;

}