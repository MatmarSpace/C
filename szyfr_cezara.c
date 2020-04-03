#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//zmienne
char text[10];
int key;
int i;

int main()
{
    printf("===============================================================\n");
    printf("Wczytaj tekst: ");
    gets(text);
    printf("Wczytaj liczbę - klucz szyfru: ");
    scanf("%d",&key);
    printf("===============================================================\n");
    
    for(i=0;i<10;i++)
    {
        text[i] += key;
        if(text[i]>122)
            text[i] -= 26;
    }

    printf("TEKST ZASZYFROWANY: ");
    puts(text);

    for(i=0;i<10;i++)
    {
        text[i] -= key;
        if(text[i]<97)
            text[i] += 26;
    }

    printf("TEKST ROZSZYFROWANY: ");
    puts(text);
    printf("===============================================================\n");


    return 0;
}