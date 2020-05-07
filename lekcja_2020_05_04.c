#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

//stałe
#define n 3

//zmienne
int i,j;
int max;
int suma=0;
float average;

int main()
{
    struct Dane_Os
    {
        char nazwisko[20];
        char imie[15];
        int wiek;
    }osoba[n];

    for(i=0;i<n;++i)
    {
        printf("Podaj nazwisko: ");
        scanf("%s",osoba[i].nazwisko);
        printf("Podaj imie: ");
        scanf("%s",osoba[i].imie);  //przy stringach nie trzeba dawać znaku "&"
        printf("Podaj wiek: ");
        scanf("%d",&osoba[i].wiek);
        printf("----------------------------\n");
        suma+=osoba[i].wiek;
    }

    printf("============================\n");

    for(i=0;i<n;++i)
    {
        printf("Nazwisko: %s\n",osoba[i].nazwisko);
        printf("Imie: %s\n",osoba[i].imie);
        printf("Wiek: %d\n",osoba[i].wiek);
        printf("----------------------------\n");
    }

    max=osoba[0].wiek;
    for(i=1;i<n;++i)
    {
        if(osoba[i].wiek>max)
        {
            max=osoba[i].wiek;
        }
    }
    printf("OSOBY NAJSTARSZE\n");
    for(i=0;i<n;++i)
    {
        if(osoba[i].wiek==max)
        {
            printf("Nazwisko: %s\n",osoba[i].nazwisko);
            printf("Imie: %s\n",osoba[i].imie);
            printf("Wiek: %d\n",osoba[i].wiek);
        }
    }

    average=(float)suma/(float)n;
    printf("Suma: %d\n",suma);
    printf("Srednia: %f\n",average);

    /*TO DO: */

    //DONE! /*wyświetlić wszystkie osoby, których imie zaczyna się na literę A*/
    //DONE! /*zrobić normalizację małych i dużych liter w nazwiskach przy wykorzystaniu biblioteki ctype*/
    
    printf("----------------------------\n");
    printf("Wszystkie osoby, ktorych imie zaczyna sie na litere A:\n");
    for(i=0;i<n;++i)
    {
        if(osoba[i].imie[0]=='a' || osoba[i].imie[0]=='A')
        {
            printf("Imie: %s\n",osoba[i].imie);
        }
    }
    printf("----------------------------\n");
    printf("DANE OSOB PO PRZEPROWADZENIU NORMALIZACJI DUZYCH I MALYCH LITER\n");
    printf("----------------------------\n");
    for(i=0;i<n;++i)
    {
        osoba[i].imie[0] = toupper(osoba[i].imie[0]);
        osoba[i].nazwisko[0] = toupper(osoba[i].nazwisko[0]);
        for(j=1;j<strlen(osoba[i].imie);++j)
        {
            osoba[i].imie[j] = tolower(osoba[i].imie[j]);
        }
        for(j=1;j<strlen(osoba[i].nazwisko);++j)
        {
            osoba[i].nazwisko[j] = tolower(osoba[i].nazwisko[j]);
        }
    }
    for(i=0;i<n;++i)
    {
        printf("Nazwisko: %s\n",osoba[i].nazwisko);
        printf("Imie: %s\n",osoba[i].imie);
        printf("Wiek: %d\n",osoba[i].wiek);
        printf("----------------------------\n");
    }


    return 0;
}
