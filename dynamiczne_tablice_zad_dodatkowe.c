#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//stałe
#define n 20

//zmienne
int A[n];
int i,j;
int rozmiar=0;
int *tablica;

int main()
{
    //wylosowanie tablicy statycznej A[n]
    srand(time(0));
    for(i=0;i<n;i++)
        A[i] = rand()%5;

    //wypisanie tablicy A[n]
    printf("------------------------------------------\n");
    printf("Wylosowana tablica A[n]:\n");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n------------------------------------------\n");

    //zliczenie niezerowych elementów tablicy
    for(i=0;i<n;i++)
    {
        if(A[i]!=0)
            rozmiar++;
    }

    //zaalokowanie dynamicznej tablicy o długości równej zmiennej "rozmiar"
    tablica = malloc(rozmiar*sizeof(int));

    //uzupełnienie dynamicznej tablicy elementami niezerowymi z tablicy A[n]
    j=0;
    for(i=0;i<n;i++)
    {
        if(A[i]!=0)
        {
            *(tablica+j)=A[i];
            j++;
        }
    }

    //wyświetlenie uzupełnionej tablicy dynamicznej
    printf("Nowa tablica bez zer:\n");
    for(i=0;i<rozmiar;i++)
        printf("%d ",*(tablica+i));
    printf("\n------------------------------------------\n");

    return 0;
}