#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int girdi;
    char ayinMevsimi;

    printf("Bir say� yaz�n:");

    scanf("%d", &girdi);

    switch (girdi)
    {
    case 12:
        printf("%d numaral� ay Aral�k ay�, %s mevsimidir.",girdi,"K��");
        ayinMevsimi = 'K';

        break;
    case 2:
        printf("Ocak ay�nda, k�� mevsimindesin");
        break;
    case 3:
        printf("�ubat ay�nda, k�� mevsimindesin");
        break;

    default:
        break;
    }

    return 0;
}