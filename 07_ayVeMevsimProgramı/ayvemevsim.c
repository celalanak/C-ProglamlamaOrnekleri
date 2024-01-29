#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int girdi;
    char ayinMevsimi;

    printf("Bir sayý yazýn:");

    scanf("%d", &girdi);

    switch (girdi)
    {
    case 12:
        printf("%d numaralý ay Aralýk ayý, %s mevsimidir.",girdi,"Kýþ");
        ayinMevsimi = 'K';

        break;
    case 2:
        printf("Ocak ayýnda, kýþ mevsimindesin");
        break;
    case 3:
        printf("Þubat ayýnda, kýþ mevsimindesin");
        break;

    default:
        break;
    }

    return 0;
}