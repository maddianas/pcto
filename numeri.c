#include <stdio.h>

int main()
{
    int num;
    int div;
    int c = 0;

    printf("devi inserire un numero muoviti \n ");
    scanf("%d", &num);
    div = num - 1;
    while (div > 1)
    {
        if (num % div == 0)
        {
            c = c + 1;
        }
        div = div - 1;
    }

    if (c==0 && num>1)
    
    {
        printf("il tuo numero è primo complimenti");
    }
    else
    {
        printf("scemo non è primo!!!");
    }
}