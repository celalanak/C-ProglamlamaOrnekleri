#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("ASCII değerini görmek istediğiniz bir karakter giriniz : \n");

    char karakter;
    scanf("%c", &karakter);

    if (karakter >= 0 && karakter <= 9)
    {
        printf("Girdiğiniz karakter %c, bu karakterin ASCII karşılığı %d", karakter, karakter);
    }

    else if (karakter >= 65 && karakter <= 90)
    {
        printf("Girdiğiniz karakter %c, bu karakterin ASCII karşılığı büyük %d harfidir.", karakter, karakter);
    }

    else if (karakter >= 97 && karakter <= 122)
    {
        printf("Girdiğiniz karakter %c, bu karakterin ASCII karşılığı küçük %d harfidir.", karakter, karakter);
    }

    else
    {
        printf("Girdiğiniz %c karakteri %d ASCII koduna eşittir.", karakter, karakter);
    }

    return 0;
}
