#include <stdio.h>
#include <stdlib.h>


int main()
{
    float total = 0;
    float npecas, cpecas, vpecas;
    for (int i = 0; i < 2; i++)
    {
        scanf("%f %f %f",&npecas, &cpecas, &vpecas);
        total += cpecas * vpecas;
    }



    printf("VALOR A PAGAR: R$ %.2f", total);
}

