#include <stdio.h>

int main()
{
    int num = 20;
    int num2 = 40;
    float price = 10.99;

    char c = 'c';

    int algo = 15, systeme = 16, sql = 19, merise = 15;

    float moyenne; 
    
    printf("Hello World %d \n", num2);


    printf("la valeur de num = %d , la valeur de num2 = %i, prix = %.2f \n", num, num2, price, c);
    num = 30;
    num2 = 40;
    c = 'a';
    
    num = num2;
    printf("new values : la valeur de num = %d , la valeur de num2 = %i, prix = %.2f, char value : %c \n", num, num2, price, c);
    return 0;
}