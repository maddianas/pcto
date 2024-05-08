#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf ("%d %d %d", &a, &b, &c);

    if( a+b>c && b+c>a && a+c>b)
    {
        printf("è un triangolo");
        if (a==b && b==c)
        {
            printf ("è un triangolo equilatero");

        }

    
        else if (a==b|| b==c || c==a)
        {
            printf ("è un triangolo isoscele");

        }

        else 
        {
            printf ("è un triangolo scaleno");
        }
    }

    else 
    {
        printf ( "non è un triangolo");

    }

}