#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*

    MENU                SÝPARÝÞ KODU    FÝYATI
    Baþlangýçlar        1               5.5 TL
    Ara Sýcaklar        2               7.5 TL
    Salatalar           3               12 TL
    Ana Yemekler        4               17.75 TL
    Tatlýlar            5               11.25 TL
    Ýçecekler           6               2.25 TL

    */

    printf("MENU\t\tSÝPARÝÞ KODU\t\tFIYAT\n");
    printf("Baþlangýçlar\t\t1\t\t5.5\n");
    printf("Ara Sýcaklar\t\t2\t\t7.5\n");
    printf("Salatalar\t\t3\t\t12\n");
    printf("Ana Yemekler\t\t4\t\t17.75\n");
    printf("Tatlýlar\t\t5\t\t11.25\n");
    printf("Ýçeçekler\t\t6\t\t2.25\n");

    int siparisNumarasi;
    float toplam, porsiyon;

menu:
    printf("Yemek istediðiniz ürünün sipariþ kodunu girin:\n");
    scanf("%d", &siparisNumarasi);

    if (siparisNumarasi == -1)
    {
        goto cikis;
    }

    if (siparisNumarasi > 0 && siparisNumarasi < 7)
    {
        printf("Kaç porsiyon istersiniz: \n");
        scanf("%f", &porsiyon);
    }

    switch (siparisNumarasi)
    {
    case 1:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 5.5;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;
    case 2:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 7.5;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;
    case 3:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 12;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;
    case 4:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 17.75;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;
    case 5:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 11.25;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;
    case 6:
        if (porsiyon > 0)
        {
            toplam += porsiyon * 2.25;
            printf("Toplam Tutar: %.2f TL.\n", toplam);
        }
        else
        {
            printf("En az bir porsiyon olacak þekilde seçim yapýn");
        }
        break;

    default:
        printf("Lütfen 1-6 arasýnda seçip yapýnýz.");
        break;
    }

    goto menu;

cikis:
    printf("Sipariþ Tamamlandýr.");
    printf("Toplam Tutar: %.2f TL'dir.", toplam);
    return 0;
}