#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//zmienne
float a,b,c;
float delta;
float x1,x2;

//funkcje
void Plot(int plotType);

int main()
{
    while(1)
    {
    system("cls");
    printf("===============================================================\n");
    printf("Wczytaj kolejne wspolczynniki rowniania kwadratowego w postaci:\n");
    printf("ax^2 + bx + c = 0\n");
    printf("===============================================================\n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    printf("===============================================================\n");
    if(a==0)
    {
        printf("TO NIE JEST ROWNANIE KWADRATOWE\n");
    }
    else
    {
        delta = b*b-(4*a*c);
        if(delta<0)
        {
            if(a>0)
                Plot(2);
            if(a<0)
                Plot(4);
            printf("Delta = %f\n",delta);
            printf("Rownanie nie ma pierwiastkow rzeczywistych\n");
            printf("%fx^2+%fx+%f",a,b,c);
        }
        else if(delta==0)
        {
            x1 = (-b-sqrt(delta))/(2*a);
            if(a<0)
                Plot(5);
            if(a>0)
                Plot(6);
            printf("Delta = %f\n",delta);
            printf("Rownanie ma jeden pierwiastek rzeczywisty:\n");
            printf("x = %f\n",x1);
            printf("%f(x-%f)(x-%f)\n",a,x1,x1);
        }
        else if(delta>0)
        {
            x1 = (-b-sqrt(delta))/(2*a);
            x2 = (-b+sqrt(delta))/(2*a);
            if(a>0)
                Plot(1);
            if(a<0)
                Plot(3);
            printf("Delta = %f\n",delta);
            printf("Rownanie ma dwa pierwiastki rzeczywiste:\n");
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
            printf("%f(x-%f)(x-%f)\n",a,x1,x2);
        }
    }
    printf("===============================================================\n");
    printf("(nacisnij dowolny klawisz)");
    fflush(stdin); 
    getchar();
    }
    return 0;
}

void Plot(int plotType)
{
    switch (plotType)
    {
    case 1:
        printf("|          |\n |        |\n==\\======/====>\n   \\    /\n    *==*\n");
        break;
    case 2:
        printf("|          |\n |        |\n  \\      /     \n   \\    /\n    *==*\n\n==============>\n");
        break;
    case 3:
        printf("    .==.\n   /    \\\n==/======\\====>\n |        |\n|          |\n");
        break;
    case 4:
        printf("==============>\n\n    .==.\n   /    \\\n  /      \\     \n |        |\n|          |\n");
        break;
    case 5:
        printf("====.==.======>\n   /    \\\n  /      \\     \n |        |\n|          |\n");
        break;
    case 6:
        printf("|          |\n |        |\n  \\      /     \n   \\    /\n====*==*======>\n");
        break;
    default:
        printf("\n#ERROR: WRONG PLOT TYPE!\n");
        break;
    }
    printf("===============================================================\n");
}