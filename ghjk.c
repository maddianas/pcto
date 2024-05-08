#include <stdio.h>

int main()
    {
    int a;

    printf ("in che anno sei nato?");
    scanf ("%d", &a);

    if (a== 1969)    
    {
        printf(" sei nato nell'anno in cui l'uomo è sbarcato sulla luna");
    }
    else if (a> 1969)
    {
        printf ("sei nato %d anni dopo", a- 1969);
    }    

    else if (a< 1969)
    {
        printf("sei nato %d prima",  1969-a );
    }




    }





    