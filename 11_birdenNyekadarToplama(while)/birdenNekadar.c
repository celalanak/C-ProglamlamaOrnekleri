#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int x = 1;
    int toplam = 0;

    printf("Bir Sayý giriniz: ");
    scanf("%d", &sayi);

    int kullanicininGirdiðisayi = sayi;
    while (sayi > 0)
    {
        printf("%d\n", x);
        toplam = toplam + x;
        x++;
        sayi--;
    }
    printf("Girmiþ olduðunuz sayýlarýn toplamý = %d\n", toplam);
    return 0;
}