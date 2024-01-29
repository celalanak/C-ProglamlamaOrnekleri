#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int sayi, satir, sutun;

    printf("Lütfen bir sayı giriniz: \n");
    scanf("%d", &sayi);

    for (satir = 1; satir <= sayi; satir++)
    {
        for (sutun = 1; sutun <= satir; sutun++)
        {
            printf("*");
        }
        printf("\n");
        }

    return 0;
}