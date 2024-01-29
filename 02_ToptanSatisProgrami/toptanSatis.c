#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // 0-100 adet �r�n al�nacak, adet fiyat� 3tl
    // 100-200 adet �r�n al�rsa, adet fiyat� 2.5 tl
    // 200-300 adet al�n�rsa, adet fiyat� 2 tl
    // 300-400 adet al�n�rsa, adet fiyat� 1.25 tl

    int adet;
    float toplam, adetFiyati;
    printf("Ka� adet �r�n alacaks�n�z: ");
    scanf("%d", &adet);

    if (adet < 0)
    {
        printf("Birden b�y�k bir say� giriniz.");
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
        printf("%d adet �r�n almak istediniz, fakat almak istedi�iniz adet sat��� yoktur.", adet);
    }

    toplam = adet * adetFiyati;
    printf("Toplam %.2f TL'dir. �skontolu fiyat� %d TL'dir.", toplam, (int)toplam);
    return 0;
}