#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int x = 1;
    int toplam = 0;

    printf("Bir Sayı giriniz: ");
    scanf("%d", &sayi);

    int kullanicininGirdiğisayi = sayi;
    while (sayi > 0)
    {
        printf("%d\n", x);
        toplam = toplam + x;
        x++;
        sayi--;
    }
    printf("Girmiş olduğunuz sayıların toplamı = %d\n", toplam);
    return 0;
}