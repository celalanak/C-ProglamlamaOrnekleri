#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int buyukSayi, kucukSayi;
    printf("Birbirinin kat� oldu�unu ��renmek istedi�iniz 2 say� giriniz, �nce b�y�k sonra k���k say� olacak �ekilde: ");

    scanf("%d%d", &buyukSayi, &kucukSayi);

    if (buyukSayi % kucukSayi == 0)
    {
        printf("%d %d say�lar� birbirinin �arpan�d�r.",kucukSayi,buyukSayi);
    }
    else
    {
         printf("%d %d say�lar� birbirinin �arpan� de�ildir.",kucukSayi,buyukSayi);
    }
    return 0;
}