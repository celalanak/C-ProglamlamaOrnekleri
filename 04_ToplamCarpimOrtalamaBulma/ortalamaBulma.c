#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    float sayi1, sayi2, sayi3, toplam, toplamOrtalama, carpim, carpimOrtalama, kucuk, buyuk;

    printf("Ortalamasýný almak istediðiniz üç sayý giriniz: \n");

    scanf("%f%f%f", &sayi1, &sayi2, &sayi3);

    toplam = sayi1 + sayi2 + sayi3;
    carpim = sayi1 * sayi2 * sayi3;
    toplamOrtalama = toplam / 3;
    carpimOrtalama = carpim / 3;

    kucuk = sayi1;

    if (kucuk < sayi2)
    {
        kucuk = sayi2;
    }

    if (kucuk < sayi3)
    {
        kucuk = sayi3;
    }

    buyuk = sayi1;

    if (sayi2 > buyuk)
    {
        buyuk = sayi2;
    }

    if (sayi3 > buyuk)
    {
        buyuk = sayi3;
    }

    printf("Girdiðiniz %f %f %f sayýlarýnýn toplamlarý %f ve ortalamasý %.2f.\n", sayi1, sayi2, sayi3, toplam, toplamOrtalama);
    printf("Girdiðiniz %f %f %f sayýlarýnýn çarpýmlarý %f ve ortalamasý %.2f.\n", sayi1, sayi2, sayi3, carpim, carpimOrtalama);
    printf("Girdiðiniz en küçük sayý ise %.0f.\n", kucuk);
    printf("Girdiðiniz en büyük sayý ise %.0f.", buyuk);

    return 0;
}