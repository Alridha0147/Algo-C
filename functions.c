#include <stdio.h>
#include "functions.h"

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
