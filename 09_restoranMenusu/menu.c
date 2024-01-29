#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*

    MENU                S�PAR�� KODU    F�YATI
    Ba�lang��lar        1               5.5 TL
    Ara S�caklar        2               7.5 TL
    Salatalar           3               12 TL
    Ana Yemekler        4               17.75 TL
    Tatl�lar            5               11.25 TL
    ��ecekler           6               2.25 TL

    */

    printf("MENU\t\tS�PAR�� KODU\t\tFIYAT\n");
    printf("Ba�lang��lar\t\t1\t\t5.5\n");
    printf("Ara S�caklar\t\t2\t\t7.5\n");
    printf("Salatalar\t\t3\t\t12\n");
    printf("Ana Yemekler\t\t4\t\t17.75\n");
    printf("Tatl�lar\t\t5\t\t11.25\n");
    printf("��e�ekler\t\t6\t\t2.25\n");

    int siparisNumarasi;
    float toplam, porsiyon;

menu:
    printf("Yemek istedi�iniz �r�n�n sipari� kodunu girin:\n");
    scanf("%d", &siparisNumarasi);

    if (siparisNumarasi == -1)
    {
        goto cikis;
    }

    if (siparisNumarasi > 0 && siparisNumarasi < 7)
    {
        printf("Ka� porsiyon istersiniz: \n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
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
            printf("En az bir porsiyon olacak �ekilde se�im yap�n");
        }
        break;

    default:
        printf("L�tfen 1-6 aras�nda se�ip yap�n�z.");
        break;
    }

    goto menu;

cikis:
    printf("Sipari� Tamamland�r.");
    printf("Toplam Tutar: %.2f TL'dir.", toplam);
    return 0;
}