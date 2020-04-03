#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define n 12
#define m 10

int i,j;
int t[n][m];
int x,y;

int min(int a, int b)
{
    if(a<=b)
        return a;
    else
        return b;
}

int max(int a, int b)
{
    if(a>=b)
        return a;
    else
        return b;
}

int abs(int a)
{
    if(a<0)
        return -a;
    else
        return a;
}

int main()
{
    srand(time(0));

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            t[i][j]=rand()%10;
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }

    printf("\n------------------------------\n");
    x=rand()%n;
    printf("x: %d\n",x);
    y=rand()%m;
    printf("y: %d\n",y);
    printf("\n------------------------------\n");

    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            t[i][j]=max(abs(x-i),abs(y-j));
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }

    return 0;
}