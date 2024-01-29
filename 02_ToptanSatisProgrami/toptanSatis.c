#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // 0-100 adet ürün alınacak, adet fiyatı 3tl
    // 100-200 adet ürün alırsa, adet fiyatı 2.5 tl
    // 200-300 adet alınırsa, adet fiyatı 2 tl
    // 300-400 adet alınırsa, adet fiyatı 1.25 tl

    int adet;
    float toplam, adetFiyati;
    printf("Kaç adet ürün alacaksınız: ");
    scanf("%d", &adet);

    if (adet < 0)
    {
        printf("Birden büyük bir sayı giriniz.");
    }

    else if (adet > 0 && adet < 100)
    {
        adetFiyati = 3;
    }

    else if (adet >= 100 && adet < 200)
    {
        adetFiyati = 2.5;
    }

    else if (adet >= 200 && adet < 300)
    {
        adetFiyati = 2;
    }

    else if (adet >= 300 && adet <= 400)
    {
        adetFiyati = 1.25;
    }

    else
    {
        printf("%d adet ürün almak istediniz, fakat almak istediğiniz adet satışı yoktur.", adet);
    }

    toplam = adet * adetFiyati;
    printf("Toplam %.2f TL'dir. İskontolu fiyatı %d TL'dir.", toplam, (int)toplam);
    return 0;
}