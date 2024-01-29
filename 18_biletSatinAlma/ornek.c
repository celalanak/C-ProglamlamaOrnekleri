#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*

    int sayi;

    printf("Girdiğiniz sayı ile 0 arasında kalan 5'e bölünebilen sayıları ekrana yazdırın.\n");
    printf("Lütfen bir sayı giriniz: \n");

    scanf("%d", &sayi);

    if (sayi >= 0)
    {
        for (int i = 0; i < sayi; i += 5)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (int i = sayi; i < 0; i += 5)
        {
            printf("%d\n", i);
        }
    }
    */

    int biletSayisi = 100;
    char biletAl;
    int alinanbiletsayisi;

    for (; biletSayisi > 0;)
    {
        printf("Alınabilecek toplam bilet sayısı: %d\n", biletSayisi);
        printf("Bilet almak istermisiniz? [E/e]\n");
        scanf(" %c", &biletAl);

        if (biletAl == 'e' || biletAl == 'E')
        {
            printf("Kaç adet bilet istiyorsunuz?\n");
            scanf("%d", &alinanbiletsayisi);
            biletSayisi -= alinanbiletsayisi;
        }
        else
        {
            break;
        }
    }

    if (biletSayisi == 0)
    {
        printf("Biletler tükendi, kalan bilet sayısı %d.\n", biletSayisi);
    }
    else
    {
        printf("Toplam alınan bilet sayısı: %d\nKalan bilet sayısı: %d\n", 100 - biletSayisi, biletSayisi);
    }

    return 0;
}