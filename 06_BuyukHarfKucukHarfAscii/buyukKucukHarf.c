#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    printf("ASCII de�erini g�rmek istedi�iniz bir karakter giriniz : \n");

    char karakter;
    scanf("%c", &karakter);

    if (karakter >= 0 && karakter <= 9)
    {
        printf("Girdi�iniz karakter %c, bu karakterin ASCII kar��l��� %d", karakter, karakter);
    }

    else if (karakter >= 65 && karakter <= 90)
    {
        printf("Girdi�iniz karakter %c, bu karakterin ASCII kar��l��� b�y�k %d harfidir.", karakter, karakter);
    }

    else if (karakter >= 97 && karakter <= 122)
    {
        printf("Girdi�iniz karakter %c, bu karakterin ASCII kar��l��� k���k %d harfidir.", karakter, karakter);
    }

    else
    {
        printf("Girdi�iniz %c karakteri %d ASCII koduna e�ittir.", karakter, karakter);
    }

    return 0;
}
