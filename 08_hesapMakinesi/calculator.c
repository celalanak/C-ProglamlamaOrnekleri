#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int secim;
    float toplama, cikartma, bolme, carpma, kok, mod, sayi1, sayi2;

menu:
    printf("L�tfen Yapmak istedi�iniz i�lemi se�in: \n");
    printf("1.Toplama\n2.��kartma\n3.�arpma\n4.B�lme\n5.K�k Alma\n6.�st Alma\n");
    printf("��kmak i�in -1'e bas�n.\n");
    scanf("%d", &secim);

    if (secim == -1)
    {
        goto cikis;
    }

    if (secim > 0 && secim < 7)
    {
        printf("�ki say� se�in: \n");
        scanf("%f%f", &sayi1, &sayi2);
    }

    toplama = sayi1 + sayi2;
    carpma = sayi1 * sayi2;
    bolme = sayi1 / sayi2;
    cikartma = sayi1 - sayi2;

    switch (secim)
    {

    case 1:
        printf("Girdi�iniz iki say�n�n toplam� %.1f", toplama);
        break;
    case 2:
        printf("Girdi�iniz iki say�n�n fark� %.1f", cikartma);
        break;
    case 3:

        printf("Girdi�iniz iki say�n�n �arp�m� %.1f", carpma);
        break;
    case 4:

        printf("Girdi�iniz iki say�n�n sonucu %.1f", bolme);
        break;
    case 5:
        printf("Girdi�iniz %.0f say�s�n�n k�k�  %.3f, ikinci girdi�iniz %.0f say�s�n�n k�k� ise %.3f.", sayi1, sqrt(sayi1), sayi2, sqrt(sayi2));
        break;

    case 6:
        printf("%.0f �zeri %.0f = %.0f\n", sayi1, sayi2, pow(sayi1, sayi2));
        break;

    default:
        printf("1-6 aras�nda se�im yap�n.");
        break;
    }
    goto menu;
cikis:
    printf("Hesap Makinesi Sonland�.");
    return 0;
}