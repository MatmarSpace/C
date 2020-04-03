#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//zmienne
char text[12];
int number;
int i;

int main()
{
    printf("Podaj tekst do zakodowania - max 10 znakow:\n");
    fgets(text,12,stdin);
    printf("Podaj liczbe (<=25): \n");
    scanf("%d",&number);      //w treści zadania była mowa o wczytaniu tej liczby, ale nigdzie nie było napisane, żeby jej użyć

    printf("DEBUG - DLUGOSC NAPISU %d\n",strlen(text)-1);

    for(i=0;i<10;i++)
    {
        if((text[i]>31)&&(strlen(text)-1+text[i]<=255))
        {
            text[i] += strlen(text)-1;
        }
        
    }

    printf("Zakodowany napis: ");
    puts(text);

    

    return 0;
}