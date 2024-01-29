#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*int sayi;

    printf("Lütfen Bir Sayý Gir: ");

    scanf("%d", &sayi);

    if (sayi % 10 == 0)
    {
        printf("Girdiðiniz sayý %d, 10'a tam bölünüyor.", sayi);
    }

    else
    {
        printf("Girdiðiniz sayý %d, tam bölünmüyor.", sayi);
    }*/

    /*char cinsiyet;

    printf("Lütfen cinsiyetinizi girin: ");
    scanf("%c", &cinsiyet);

    if (cinsiyet == 'E' || cinsiyet == 'e')
    {
        printf("Siz erkeksiniz.");
    }

    else if (cinsiyet == 'K' || cinsiyet == 'k')
    {
        printf("Siz kadýnsýnýz.");
    }

    else
    {
        printf("Lütfen E/K giriniz.");
    }
    */

    char cinsiyet;
    float boy;

    printf("Lütfen cinsiyetinizi girin: ");
    scanf("%c", &cinsiyet);

    printf("Lütfen boyunuzu cm cinsinden girin.");
    scanf("%f", &boy);

    if (cinsiyet == 'E' || cinsiyet == 'e' && boy >= 170 || cinsiyet == 'K' || cinsiyet == 'k' && boy >= 160)
    {
        printf("Askeri Okula Girebilirsiniz.");
    }

    else
    {
        printf("Askeri okula giremezsiniz.");
    }

    return 0;
}