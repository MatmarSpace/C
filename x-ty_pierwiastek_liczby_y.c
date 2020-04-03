#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//zmienne
unsigned int x,y;
float wynik;

int main()
{
    printf("===============================================================\n");
    printf("Witaj! Obliczymy x-ty pierwiastek liczby y!\n");
    printf("===============================================================\n");
    printf("x = ");
    scanf("%u",&x);
    printf("y = ");
    scanf("%u",&y);
    printf("===============================================================\n");
    wynik = pow(y,(1./x));
    printf("Wynik = %f",wynik);

    return 0;
}