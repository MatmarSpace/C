#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//zmienne
float fromPoint = 0.8;      //punkt początkowy
float toPoint = 2.8;        //punkt końcowy
float actualPoint;          //aktualnie badany punkt
int accuracyFactor = 100;   //im większy tym dokładniej
float constantHeight;       //stała wysokość kolejnych trapezów
float field = 0;            //pole pod wykresem    
int i;

int main()
{
    constantHeight = (toPoint-fromPoint)/(float)accuracyFactor;
    actualPoint = fromPoint;
    printf("height = %f\n",constantHeight);

    
    for(i=0;i<accuracyFactor;i++)
    {
        printf("sin = %f\n",sin(actualPoint));
        field += 0.5*(sin(actualPoint)+sin(actualPoint+constantHeight))*constantHeight;
        actualPoint += constantHeight;
    }
    
    printf("POLE POD WYKRESEM WYNOSI: %f\n",field);

    return 0;
}