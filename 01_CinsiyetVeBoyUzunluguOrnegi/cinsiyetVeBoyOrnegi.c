#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*int sayi;

    printf("L�tfen Bir Say� Gir: ");

    scanf("%d", &sayi);

    if (sayi % 10 == 0)
    {
        printf("Girdi�iniz say� %d, 10'a tam b�l�n�yor.", sayi);
    }

    else
    {
        printf("Girdi�iniz say� %d, tam b�l�nm�yor.", sayi);
    }*/

    /*char cinsiyet;

    printf("L�tfen cinsiyetinizi girin: ");
    scanf("%c", &cinsiyet);

    if (cinsiyet == 'E' || cinsiyet == 'e')
    {
        printf("Siz erkeksiniz.");
    }

    else if (cinsiyet == 'K' || cinsiyet == 'k')
    {
        printf("Siz kad�ns�n�z.");
    }

    else
    {
        printf("L�tfen E/K giriniz.");
    }
    */

    char cinsiyet;
    float boy;

    printf("L�tfen cinsiyetinizi girin: ");
    scanf("%c", &cinsiyet);

    printf("L�tfen boyunuzu cm cinsinden girin.");
    scanf("%f", &boy);

    if (cinsiyet == 'E' || cinsiyet == 'e' && boy >= 170 || cinsiyet == 'K' || cinsiyet == 'k' && boy >= 160)
    {
        printf("Askeri Okula Girebilirsiniz.");
    }

    else
    {
        printf("Askeri okula giremezsiniz.");
    }

    return 0;
}