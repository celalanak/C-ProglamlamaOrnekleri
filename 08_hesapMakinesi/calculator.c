#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int secim;
    float toplama, cikartma, bolme, carpma, kok, mod, sayi1, sayi2;

menu:
    printf("Lütfen Yapmak istediðiniz iþlemi seçin: \n");
    printf("1.Toplama\n2.Çýkartma\n3.Çarpma\n4.Bölme\n5.Kök Alma\n6.Üst Alma\n");
    printf("Çýkmak için -1'e basýn.\n");
    scanf("%d", &secim);

    if (secim == -1)
    {
        goto cikis;
    }

    if (secim > 0 && secim < 7)
    {
        printf("Ýki sayý seçin: \n");
        scanf("%f%f", &sayi1, &sayi2);
    }

    toplama = sayi1 + sayi2;
    carpma = sayi1 * sayi2;
    bolme = sayi1 / sayi2;
    cikartma = sayi1 - sayi2;

    switch (secim)
    {

    case 1:
        printf("Girdiðiniz iki sayýnýn toplamý %.1f", toplama);
        break;
    case 2:
        printf("Girdiðiniz iki sayýnýn farký %.1f", cikartma);
        break;
    case 3:

        printf("Girdiðiniz iki sayýnýn çarpýmý %.1f", carpma);
        break;
    case 4:

        printf("Girdiðiniz iki sayýnýn sonucu %.1f", bolme);
        break;
    case 5:
        printf("Girdiðiniz %.0f sayýsýnýn kökü  %.3f, ikinci girdiðiniz %.0f sayýsýnýn kökü ise %.3f.", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2));
        break;

    case 6:
        printf("%.0f üzeri %.0f = %.0f\n", sayi1, sayi2, pow(sayi1, sayi2));
        break;

    default:
        printf("1-6 arasýnda seçim yapýn.");
        break;
    }
    goto menu;
cikis:
    printf("Hesap Makinesi Sonlandý.");
    return 0;
}