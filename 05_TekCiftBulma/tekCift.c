#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("Bir say� girin: ");
    int sayi;

    scanf("%d", &sayi);

    if (sayi %2  == 0)
    {
        printf("Girdi�iniz say� %d, kalan� s�f�r oldu�undan �ifttir.", sayi);
    }

    else
    {
        printf("Girdi�iniz say� %d, kalan� bir oldu�undan tektir.", sayi);
    }

    return 0;
}